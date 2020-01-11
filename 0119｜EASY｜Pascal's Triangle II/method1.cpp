#include <vector>
#include <iostream>
#include <algorithm>


class Solution {
public:
    std::vector<int> getRow(int rowIndex) {
        if(rowIndex == 0)     return std::vector<int>{1};
        else if(rowIndex < 0) return std::vector<int>{ };

        auto res_result = std::vector<int>{1};

        for(int currIndex = 1; currIndex <= rowIndex; currIndex++){
            long res_length = res_result.size();

            int quotient = (currIndex + 1) / 2;
            int reminder = (currIndex + 1) % 2;
            int old = res_result[res_length - 1];

            for(long i = res_length - 1; i >= 1; i--) res_result[i] = res_result[i - 1] + res_result[i];
            if(reminder == 1) res_result.push_back(old * 2);
        }
        auto rev_result = res_result;
        if(rowIndex % 2 == 0)  rev_result.pop_back();
        std::reverse(rev_result.begin(), rev_result.end());
        res_result.insert(res_result.end(), rev_result.begin(), rev_result.end());
        return res_result;
    }
};

int main(){
    Solution so = Solution();
    for(auto element: so.getRow(5)){
            std::cout<<element<<" ";
    }
}


