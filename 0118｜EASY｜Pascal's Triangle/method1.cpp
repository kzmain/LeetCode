#include <vector>
#include <iostream>
#include <algorithm>

class Solution {
public:


    std::vector<std::vector<int>> generate(int numRows) {
        std::vector<std::vector<int>> res_vec = std::vector<std::vector<int>>{};
        if(numRows < 1) return res_vec;
        res_vec.push_back(std::vector<int>{1});
        for(int row = 1; row < numRows; row++){
            res_vec.emplace_back();
            std::vector<int> pre_vec = res_vec[row - 1];
            long             pre_len = pre_vec.size();

            for(int i = -1; i < pre_len; i++){
                int first, second;

                if(i == -1) first = 0;
                else first = pre_vec[i];
                if(i + 1 == pre_len) second = 0;
                else second = pre_vec[i + 1];

                res_vec[row].push_back(first + second);
            }
        }
        return res_vec;
    }
};

int main(){
    Solution so = Solution();
//    std::cout<<so.generate(3).size()<<std::endl;
    for(auto line: so.generate(5)){
        for (auto element: line){
            std::cout<<element<<" ";
        }
        std::cout<<"\n";
    }
}


