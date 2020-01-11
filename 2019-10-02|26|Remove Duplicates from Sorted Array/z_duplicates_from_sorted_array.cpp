#include <iostream>
#include <vector>

std::vector<int> in = {1,1,2};
int removeDuplicates(std::vector<int>& nums) {
    int offset = 0;
    // Check and reset value
    for(int i = 1; i < nums.size(); i++){
        if(nums[i] == nums[offset]) continue;
        else {
            offset++;
            nums[offset] = nums[i];
        }
    }
    // Delete unusable elements
    nums.resize((offset+ 1));
    return offset;
}


int main() {
    auto a = removeDuplicates(in);
    auto b = in;
    return 0;
}