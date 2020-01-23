#include <iostream>
#include <vector>
#include <queue>

class Solution {
public:
    std::vector<std::vector<int>> transpose(std::vector<std::vector<int>>& A) {
        std::vector<std::vector<int>> rs;
        int row = A.size();
        int col = A[0].size();
        rs.resize(col);
        for(auto& r : rs) r.resize(row);
        for(int rowN = 0; rowN < row; rowN++){
            for(int colN = 0; colN < col; colN++){
                rs[colN][rowN] = (A[rowN][colN]);
            }
        }
        return rs;
    }
};

int main(){
    Solution so;
//    std::vector<std::vector<int>> v1 = {{1,2,3},{4,5,6},{7,8,9}};
//    std::vector<std::vector<int>> v1 = {{1,2,3}};
    std::vector<std::vector<int>> v1 = {{}};
    for(auto& line : so.transpose(v1)){
        for(auto num : line){
            std::cout<<num<<" ";
        }
        std::cout<<std::endl;
    }
//    std::cout<<"Should be :   Result: "<<so.transpose("abcde", "cdeab")<<std::endl;
//    std::cout<<"Should be :   Result: "<<so.transpose("abcde", "abced")<<std::endl;
}