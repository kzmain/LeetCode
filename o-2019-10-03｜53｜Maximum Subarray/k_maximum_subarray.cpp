#include <iostream>
#include <vector>
#include <list>

//std::string ss = "aaaaa";
//std::string fs = "bba";

//std::string ss = "hello";
//std::string fs = "ll";

std::vector<int> in_nums = {-2,1,-3,4,-1,2,1,-5,4};

int maxSubArray(std::vector<int>& nums) {
    if(nums.empty()) return 0;
    int max = INT_MIN, sum = 0;
    for(auto num : nums){
        if(sum > 0) sum += num;
        else        sum = num;
        max = max > sum ? max : sum;
    }
    return max;
}


int main() {
    auto a = maxSubArray(in_nums);
    return 0;
}
