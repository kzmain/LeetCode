#include <iostream>
#include <vector>
#include <list>

int removeElement(std::vector<int>& nums, int val) {
    short count = 0;
    for(auto num : nums){
        if(num == val) continue;
        nums[count] = num;
        count++;
    }
    nums.resize(count);
    return count;
}


int main() {
    std::vector<int> in = {3,2,2,3};
    removeElement(in, 3);
    return 0;
}
