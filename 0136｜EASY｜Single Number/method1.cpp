#include <vector>
#include <iostream>
#include <algorithm>

class Solution {
public:
   int singleNumber(std::vector<int>& nums) {
       std::sort(nums.begin(), nums.end());
       for(int i = 0; i < nums.size() - 1; i+=2) if(nums[i] != nums[i + 1]) return nums[i];
       return nums[nums.size() - 1];
   }
};


int main(){
   Solution so = Solution();
   auto a = std::vector<int>{4,1,2,1,2};
   auto b = std::vector<int>{2,2,1};
   std::cout<<so.singleNumber(a);
   std::cout<<so.singleNumber(b);
}