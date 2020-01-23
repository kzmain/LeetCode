#include <iostream>
#include <vector>
#include <set>

class Solution {
public:
    int search(std::vector<int>& nums, int target) {
        int s = 0, e = (int)nums.size() - 1, m = (s + e) / 2;
        while(e - s > 1){
            if(nums[m] < target) s = m; else if(nums[m] > target) e = m; else return m;
            m = (s + e) / 2;
        }
        for(int loc = m; loc <= e; loc++) if(nums[loc] == target) return loc;
        return -1;
    }
};


int main(){
    Solution so;
    std::vector<int> v1 = {-1,0,3,5,9,12};
    std::cout<<so.search(v1, 9)<< " ";
    std::cout<<so.search(v1, 2)<< " ";
    std::vector<int> v2 = {2,5};
    std::cout<<so.search(v2, 5)<< " ";
}