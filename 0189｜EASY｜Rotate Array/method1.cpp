#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <cmath>

class Solution {
public:
   void rotate(std::vector<int>& nums, int k) {
       int size = nums.size();
       k = k % size;

       std::vector<int> left (&nums[size - k], &nums[size]);
       std::vector<int> right(&nums[0],   &nums[size - k]);
       left.insert(left.end(), right.begin(), right.end());
       nums = left;
       for(auto num : left) std::cout<<num<<" ";
       std::cout<<std::endl;
   }
};
int main(){
    Solution so;
    auto t = std::vector<int>{1,2,3,4,5,6,7};
    auto d = std::vector<int>{-1,-100,3,99};
    auto e = std::vector<int>{1,2,3};
    auto z = std::vector<int>{1,2};
//    so.rotate(t, 3);
    so.rotate(d, 2);
//    so.rotate(e, 2);
    so.rotate(z, 3);
//    5 6 7 1 2 3 4
//    3 99 -1 -100
//    2 3 1
//    2 1

}