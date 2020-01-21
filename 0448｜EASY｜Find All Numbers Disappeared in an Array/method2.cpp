#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
   std::vector<int> findDisappearedNumbers(std::vector<int>& nums) {
       std::sort(nums.begin(), nums.end());
       std::vector<int> res;
       int ins = 0;
       for(int num : nums){
           if(num == ins){}else if(num == ins + 1){ins++;}
           else{while(ins + 1!= num){ins++;res.push_back(ins);}ins++;}
       }
       while(ins < nums.size()){ins++;res.push_back(ins);}
       return res;
   }
};

int main() {
    Solution so;
//    auto t1 = std::vector<int>{4,2,5,7};
//    auto t1 = std::vector<int>{4,3,2,7,8,2,3,1};
    auto t1 = std::vector<int>{4,3,2,7,8,2,3,1};
    for(auto num : so.findDisappearedNumbers(t1)) std::cout<<num<<" ";
    return 0;
}
