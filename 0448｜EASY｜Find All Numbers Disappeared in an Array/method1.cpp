#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<int> findDisappearedNumbers(std::vector<int>& nums) {
        std::vector<int> ans;
        int count = 0;
        int i = 0;
        for(; i < (int)nums.size(); i++){
            //@CAUTION 不能除了变为负数不能改动原位置的值
            if(nums[abs(nums[i])-1] > 0) nums[abs(nums[i])-1] *= -1;
            else count ++;
        }
        for(i = 0; count; i++){
            if(nums[i] > 0){
                ans.push_back(i+1);
                count --;
            }
        }
        return ans;
    }
};

int main() {
    Solution so;
//    auto t1 = std::vector<int>{4,2,5,7};
//    auto t1 = std::vector<int>{4,3,2,7,8,2,3,1};
    auto t1 = std::vector<int>{4,3,2,7,8,2,3,1};
    for(auto num : so.findDisappearedNumbers(t1)) std::cout<<num<<" ";
    return 0;
}
