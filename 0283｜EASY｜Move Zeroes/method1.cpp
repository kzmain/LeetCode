#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <cmath>

class Solution {
public:
    void moveZeroes(std::vector<int>& nums) {
        if(nums.empty()) return;
        int loc = 0;
        for(auto num : nums){
            if(num == 0) continue;
            nums[loc] = num;
            loc++;
        }
        for(; loc < (int)nums.size(); loc++) nums[loc] = 0;
    }
};

int main(){
    Solution so;
    std::vector<int> ns = std::vector<int>{0,1,0,3,12};
    so.moveZeroes(ns);
    for(auto n : ns){
        std::cout<<n<<" ";
    }
    std::cout<<std::endl;

}