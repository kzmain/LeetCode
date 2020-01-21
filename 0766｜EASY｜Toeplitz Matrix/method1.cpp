#include <iostream>
#include <set>
#include <vector>

class Solution {
public:
    bool isToeplitzMatrix(std::vector<std::vector<int>>& matrix) {
        int cSize = matrix[0].size();
        int lSize = matrix.size();
        int checker;
        for(int x = 0; x <= cSize + lSize - 1; x++){
            checker = INT_MIN;
            for(int line = 0; line < lSize; line++){

                int y = x - (lSize - line) + 1;
                if(y > -1 && y < cSize){
                    if(checker == INT_MIN) checker = matrix[line][y];
                    if(checker != matrix[line][y]) return false;
                }
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