#include <map>
#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
#include <stack>
#include <queue>

class Solution {
    std::set<int>   inner;
    std::queue<int> iqueue;
public:
    bool containsNearbyDuplicate(std::vector<int>& nums, int k) {
        int size = (int)nums.size(), bound = k + 1 < size ? k + 1: size;
        for(int loc = 0; loc < bound; loc++){
            if(inner.count(nums[loc]) != 0) return true;
            inner.insert(nums[loc]);
            iqueue.push(nums[loc]);
        }

        for(int loc = bound; loc < size; loc++){
            inner.erase(iqueue.front());
            iqueue.pop();
            if(inner.count(nums[loc]) != 0) return true;
            inner.insert(nums[loc]);
            iqueue.push(nums[loc]);
        }
        return false;
    }
};


int main(){
    Solution so;

    so = Solution();
    std::vector<int> vec3 = std::vector<int>{};
    std::cout<<so.containsNearbyDuplicate(vec3,0)<<std::endl;

    so = Solution();
    std::vector<int> vec0 = std::vector<int>{1,2,3,1};
    std::cout<<so.containsNearbyDuplicate(vec0,3)<<std::endl;

    so = Solution();
    std::vector<int> vec1 = std::vector<int>{1,0,1,1};
    std::cout<<so.containsNearbyDuplicate(vec1,1)<<std::endl;

    so = Solution();
    std::vector<int> vec2 = std::vector<int>{1,2,3,1,2,3};
    so.containsNearbyDuplicate(vec2,2);
}