#include <iostream>
#include <vector>

class Solution {
public:
    bool isToeplitzMatrix(std::vector<std::vector<int>>& matrix) {
        for(int i = 0; i + 1< matrix.size(); i++){
            for(int j = 0; j + 1< matrix[i].size();j++){
                if(matrix[i][j] != matrix[i + 1][j + 1]) return false;
            }
        }
        return true;
    }
};

int main(){
    Solution so;
    std::vector<std::vector<int>> t1 = std::vector<std::vector<int>>{
            {1,2,3,4},
            {5,1,2,3},
            {9,5,1,2}
    };
    std::vector<std::vector<int>> t2 = std::vector<std::vector<int>>{
            {1,2},
            {2,2}
    };
    std::vector<std::vector<int>> t3 = std::vector<std::vector<int>>{
            {23,40,65,20,51,7,18,74,18,0 ,35,31},
            {86,23,40,65,20,51,7,18,74,18,13,35},
            {53,86,23,40,65,20,51,7,18,74,18,13},
            {72,53,86,23,40,65,20,51,7,18,74,18},
            {73,72,53,86,23,40,65,20,51,7,18,74},
            {62,73,72,53,86,23,40,65,20,51,7,18}
    };

    std::cout<<so.isToeplitzMatrix(t1)<<" ";
    std::cout<<so.isToeplitzMatrix(t2)<<" ";
    std::cout<<so.isToeplitzMatrix(t3)<<" ";
}
