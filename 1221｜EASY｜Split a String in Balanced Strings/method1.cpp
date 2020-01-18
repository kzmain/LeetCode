#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

class Solution {
public:
    int balancedStringSplit(std::string s) {
        int count = 0, checker = 0;
        for(auto c : s){
            if(c == 'R') checker++;
            else         checker--;
            if(!checker) count++;
        }
        return count;
    }
};


int main(){
    Solution so;
    std::vector t1 = std::vector<int>{555,901,482,1771};
    std::vector t2 = std::vector<int>{12,345,2,6,7896};
    std::cout<<so.balancedStringSplit("RLRRLLRLRL")<<" "<<so.balancedStringSplit("RLLLLRRRLR");
}