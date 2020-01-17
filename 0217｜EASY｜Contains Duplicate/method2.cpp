#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <unordered_set>
#include <cmath>

class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        if(nums.empty()) return false;
        std::sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size() - 1; i++) if(nums[i] == nums[i + 1]) return true;
        return false;
    }
};

int main(){
    Solution so;
    std::vector<int> nums1{1, 2, 3, 1};
    std::vector<int> nums2{1, 2, 3, 4};
    std::vector<int> nums3{1, 1, 1, 3, 3, 4, 3, 2, 4, 2};
    std::cout<<so.containsDuplicate(nums1)<<std::endl;
    std::cout<<so.containsDuplicate(nums2)<<std::endl;
    std::cout<<so.containsDuplicate(nums3)<<std::endl;
}