#include <vector>
#include <iostream>
#include <algorithm>

class Solution {
public:
   int missingNumber(std::vector<int>& nums) {
       std::sort(nums.begin(), nums.end());
       int prev = -1;
       for(auto num : nums){
           if(prev + 1 != num) return num - 1;
           else{prev = num;}
       }
       return nums[nums.size() - 1] + 1;
   }
};

int main(){
    auto so = Solution();
    std::vector<int> nums = std::vector<int>{2,1};
//    std::vector<int> nums = std::vector<int>{9,8,4,2,3,5,7,0,1};
    std::cout<<so.missingNumber(nums);
    return 0;
}