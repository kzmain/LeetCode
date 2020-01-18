#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

class Solution {
public:
    int findNumbers(std::vector<int>& nums) {
        int count = 0;
        for(auto num : nums){
            int pow = 0;
            unsigned long bound = 10;
            while(bound < num){
                bound *= 10;
                pow++;
            }
            if(pow % 2) count++;
        }
        return count;
    }
};


int main(){
    Solution so;
    std::vector t1 = std::vector<int>{555,901,482,1771};
    std::vector t2 = std::vector<int>{12,345,2,6,7896};
    std::cout<<so.findNumbers(t1)<<" "<<so.findNumbers(t2);
}