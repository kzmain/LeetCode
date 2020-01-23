#include <iostream>
#include <vector>

class Solution {
public:
    int dominantIndex(std::vector<int>& nums) {
        int size = nums.size();
        if(size == 1) return 0;
        int small = 0;
        int big   = 0;
        int res = - 1;
        for(int i = 0; i < size; i++){
            if(nums[i] > small){
                if(nums[i] > big){
                    small = big;
                    big = nums[i];
                    res = i;
                }else{
                    small = nums[i];
                }
            }
        }
        //@ 0 不能做除数
        if(!small) return res;
        if(big / small > 1) return res;
        else                return -1;
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
