#include <iostream>
#include <vector>
#include <set>

class Solution {
public:
    int thirdMax(std::vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        int count = 1;
        for(int i = 1; i < nums.size(); i++) if(nums[i] != nums[i - 1]){nums[count] = nums[i];count++;}
        nums.resize(count);
        if(count < 3) return nums[count - 1];
        else return nums[count - 3];
    }
};

int main(){
    Solution so;
//    auto t1 = std::vector<int>{3, 1, 2, 4};
//    auto t1 = std::vector<int>{};
//    auto t1 = std::vector<int>{3, 1, 2, 4, 5};
//    auto t1 = std::vector<int>{4, 6};
    auto t1 = std::vector<int>{1, 3};
//    auto t1 = std::vector<int>{3, 1, 2, 4, 6};
    std::cout<<so.thirdMax(t1)<<" ";
    std::cout<<std::endl;
}
