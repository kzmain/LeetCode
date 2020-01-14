#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <set>

class NumArray {
public:
    std::vector<int> nums;
    NumArray(std::vector<int>& nums) {this->nums = nums;}

    int sumRange(int i, int j) {
        int size = (int)this->nums.size();
        if(i < 0 or i >= size or j >= size or i > j) throw;
        int sum = 0;
        for(; i <= j; i++) sum += nums[i];
        return sum;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(i,j);
 */


int main(){
    auto nums = std::vector<int>{1,2,3,4,5,6,7,8,9};
    NumArray* obj = new NumArray(nums);
    int param_1 = obj->sumRange(0,3);
    std::cout<<param_1;
}