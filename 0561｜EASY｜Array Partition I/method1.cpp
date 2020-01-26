#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    int arrayPairSum(std::vector<int>& nums) {
        std::sort(nums.begin(),nums.end());
        int sum = 0;
        for(int i = 0;i < nums.size() - 1;i += 2) sum+=nums[i];
        return sum;
    }
};

int main() {
    Solution so;
    std::vector<int> v1 = {1, 4, 3, 2};
    std::cout << "Result should be: 4. Result: " << std::to_string(so.arrayPairSum(v1)) << std::endl;
    return 0;
}
