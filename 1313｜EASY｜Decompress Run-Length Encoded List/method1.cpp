#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<int> decompressRLElist(std::vector<int>& nums) {
        std::vector<int> result;
        int loc = 0, size = (int)nums.size();;
        for(int i = 0; i < nums.size(); i += 2){
            int feq = nums[i], num = nums[i+1];
            for(int j = 0; j < feq; j ++){
                result.push_back(num);
                loc ++;
            }
        }
        return result;
    }
};


int main(){
    Solution so;
    auto t1 = std::vector<int>{2,99};
    for(auto num: so.decompressRLElist(t1)) std::cout<<num<<" ";
}