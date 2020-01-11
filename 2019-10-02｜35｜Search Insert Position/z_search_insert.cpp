#include <iostream>
#include <vector>

std::vector<int> in = {1, 3, 5, 6};
int tar = 7;

int searchInsert(std::vector<int>& nums, int target) {
    if(nums.empty() || nums[0] >= target) return 0;
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] < target) continue;
        else return i;
    }
    return nums.size();         //for完后先写return，不然return default --> 0
}

//更快的解法   line 8-10  --> line 17
//  for(){
//    if(nums[i] < target && nums[i+1] > target) return i+1;   //少循环一次，少一个else，快
//  }

int main() {
    auto a = searchInsert(in, tar);
    return 0;
}