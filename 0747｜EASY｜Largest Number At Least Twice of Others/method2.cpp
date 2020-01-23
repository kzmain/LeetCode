#include <iostream>
#include <vector>

class Solution {
public:
    int dominantIndex(std::vector<int>& nums) {
        int size = nums.size();
        if(size == 1) return 0;

        auto vec = nums;
        std::sort(vec.begin(), vec.end());
        if(vec[size - 2] != 0 and vec[size - 1] / vec[size - 2] < 2) return -1;
        
        int fNum = vec[size - 1];
        for(int i = 0; i < size; i++) if(nums[i] == fNum) return i;
        return -1;
    }
};

int main(){
    Solution so;
    std::vector<int> v1 = {3, 6, 1, 0};
    std::vector<int> v2 = {0,0,0,1};
    std::vector<int> v3 = {1, 2, 3, 4};

    std::cout<<"Should be : 1  Result: "<<so.dominantIndex(v1)<<std::endl;
    std::cout<<"Should be : 3  Result: "<<so.dominantIndex(v2)<<std::endl;
    std::cout<<"Should be : -1 Result: "<<so.dominantIndex(v3)<<std::endl;
}
