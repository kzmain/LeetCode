#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
#include <cmath>
#include <set>


class Solution {
public:
    int heightChecker(std::vector<int>& heights) {
        auto compare = heights;
        int  count = 0;
        std::sort(compare.begin(), compare.end());
        for(int i = 0 ; i < compare.size(); i++) if(compare[i] != heights[i]) count++;
        return count;
    }
};

int main(){
    Solution so;
    auto t1 = std::vector<int>{1,1,4,2,1,3};
//    auto t1 = std::vector<int>{1, 2};
    std::cout<<so.heightChecker(t1);
}