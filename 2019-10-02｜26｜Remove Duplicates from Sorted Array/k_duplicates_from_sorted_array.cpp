#include <iostream>
#include <vector>
#include <list>

int removeDuplicates(std::vector<int>& nums) {
    if(nums.empty()) return 0;
    int pre = nums[0];
    int offset = 1;
    for(int i = 1; i < nums.size(); i++){
        if(pre != nums[i]){
            nums[offset] = nums[i];
            offset++;
        }
        pre = nums[i];
    }
    nums.resize(static_cast<unsigned long>(offset));
    return offset;
}


int main() {
    std::vector<int> in = {1, 2, 2, 3, 4, 5, 6, 6, 8};
    removeDuplicates(in);
    return 0;
}
