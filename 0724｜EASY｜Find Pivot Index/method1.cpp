#include <iostream>
#include <vector>

class Solution {
public:
    int pivotIndex(std::vector<int>& nums) {
        int sumL = 0, sumR = 0, size = nums.size();
        if(nums.empty()||size == 1) return size - 1;
        for(int i = 0; i + 1 < size; i++) sumR += nums[i + 1];
        if(!sumR) return 0;
        for(int loc = 1; loc < size; loc++) {
            sumL += nums[loc -1];
            sumR -= nums[loc];
            if(sumL == sumR) return loc;
        }
        return -1;
    }
};


int main(){
    Solution so;
    std::vector<int> v1 = {1, 7, 3, 6, 5, 6};
    std::vector<int> v2 = {1, 2, 3};
    std::vector<int> v3 = {-1,-1,-1,-1,-1,0};
    std::cout<<"Should be : 3  Result: "<<so.pivotIndex(v1)<<std::endl;
    std::cout<<"Should be : -1 Result: "<<so.pivotIndex(v2)<<std::endl;
    std::cout<<"Should be : 2  Result: "<<so.pivotIndex(v3)<<std::endl;
}