#include <iostream>
#include <vector>
#include <list>

std::vector<int> in_nums = {1,3,5,6};
int tar = 5;

int searchInsert(std::vector<int>& nums, int target) {
    if(nums.empty() || target <= nums[0]) return 0;
    for(int i = 0; i < nums.size() - 1; i++){
        if(nums[i] < target && nums[i + 1] >= target) return i+1;
    }
    return static_cast<int>(nums.size());
}


int main() {
    auto a =searchInsert(in_nums, tar);
    return 0;
}
