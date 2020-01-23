#include <iostream>
#include <vector>

class Solution {
    void changeColor(std::vector<std::vector<int>>& image, int sr, int sc, int oldCol, int newCol, int row, int col){
        if(sr >= row || sc >= col || sr < 0 || sc < 0||image[sr][sc] == newCol || image[sr][sc] != oldCol) return;
        image[sr][sc] = newCol;
        changeColor(image, sr, sc + 1, oldCol, newCol, row, col);
        changeColor(image, sr, sc - 1, oldCol, newCol, row, col);
        changeColor(image, sr + 1, sc, oldCol, newCol, row, col);
        changeColor(image, sr - 1, sc, oldCol, newCol, row, col);
    }
public:
    std::vector<std::vector<int>> floodFill(std::vector<std::vector<int>>& image, int sr, int sc, int newColor) {
        int rowNum = image.size();
        int colNum = image[0].size();
        if(!rowNum || !colNum) return image;
        int oldCol = image[sr][sc];
        changeColor(image, sr, sc, oldCol, newColor, rowNum, colNum);
        return image;
    }
};


int main(){
    Solution so;
    std::vector<std::vector<int>> v1 = {{1,1,1},{1,1,0},{1,0,1}};
    std::cout<<"Should be : [[2,2,2],[2,2,0],[2,0,1]] Result: ";
    std::string str1 = "[";
    for(auto& line : so.floodFill(v1, 1, 1, 2)){
        str1 += "[";
        for(auto& num : line){str1 += std::to_string(num) + ",";}
        str1.resize(str1.size() - 1);
        str1 += "]";
    }
    str1 += "]";
    std::cout<<str1;
}