#include <iostream>
#include <vector>

//std::string in = "a b cd ";
std::vector<int> in = {-2};

int maxSubArray(std::vector<int>& nums) {

    int res = INT_MIN;  //考虑到最大和仍然可能是负数，所以对于有些变量的初始化不能为0，要为INT_MIN
    int curSum = 0;
    for(int i = 0; i < nums.size(); i++){
            curSum += nums[i];
            curSum <= nums[i] ? curSum = nums[i] : curSum;
            res < curSum ? res = curSum : res;
        }
    return res;
    }


int main() {
//    merge(in_nums1, m_in, in_nums2, n_in);
//    auto a = in_nums1;
//    auto a = lengthOfLastWord(in);
    auto a = maxSubArray(in);
}

