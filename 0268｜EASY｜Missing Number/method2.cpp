#include <vector>
#include <iostream>
#include <algorithm>

class Solution {
public:
    int missingNumber(std::vector<int>& nums) {
        int result = 0, count = 0, size = (int)nums.size();
        for(int loc = 0; loc < size; loc++, count++){
            result -= nums[loc];
            result += count;
        }
        result += count;
        return result;
    }
};

int main(){
    auto so = Solution();
    std::vector<int> nums = std::vector<int>{2,1};
//    std::vector<int> nums = std::vector<int>{9,8,4,2,3,5,7,0,1};
    std::cout<<so.missingNumber(nums);
    return 0;
}