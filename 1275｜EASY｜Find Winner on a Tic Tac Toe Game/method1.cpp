#include <iostream>
#include <vector>
#include <algorithm>
#include <map>


class Solution {
    bool checkWin(std::vector<std::vector<char>> rs, std::vector<int> p, char check){
        int rSum = rs[p[0]][0] + rs[p[0]][1] + rs[p[0]][2];
        int cSum = rs[0][p[1]] + rs[1][p[1]] + rs[2][p[1]];
        if(rSum == check * 3 || cSum == check * 3) return true;
        if(!(p[0] + p[1] - 2)||!(p[0] + p[1] - 4)||!(p[0] + p[1])){
            rSum = rs[0][0] + rs[1][1] + rs[2][2];
            cSum = rs[0][2] + rs[1][1] + rs[2][0];
            if(rSum == check * 3 || cSum == check * 3) return true;
        }
        return false;
    }
public:
    std::string tictactoe(std::vector<std::vector<int>>& moves) {
        std::vector<char> r1 = {' ', ' ', ' '};
        std::vector<char> r2 = {' ', ' ', ' '};
        std::vector<char> r3 = {' ', ' ', ' '};
        std::vector<std::vector<char>> rs = {r1, r2, r3};
        int aX = 0, aY = 0, bX = 0, bY = 0;
        for(int move = 0; move < moves.size(); move++){
            if(move % 2){
                bX += moves[move][0] + 1;
                bY += moves[move][1] + 1;
                rs[moves[move][0]][moves[move][1]] = 'B';
                if(bX > 2 || bY > 2) if(checkWin(rs, moves[move], 'B')) return "B";
            }else{
                aX += moves[move][0] + 1;
                aY += moves[move][1] + 1;
                rs[moves[move][0]][moves[move][1]] = 'A';
                if(aX > 2 || aY > 2) if(checkWin(rs, moves[move], 'A')) return "A";
            }
            if(bX +bY + aX + aY == 36){
                return "Draw";
            }
        }
        return "Pending";
    }
};

int main() {
    Solution so;
    auto v1 = std::vector<std::vector<int>>{{0,0},{2,0},{1,1},{2,1},{2,2}};
    auto v2 = std::vector<std::vector<int>>{{0,0},{1,1},{0,1},{0,2},{1,0},{2,0}};
    auto v3 = std::vector<std::vector<int>>{{0,0},{1,1},{2,0},{1,0},{1,2},{2,1},{0,1},{0,2},{2,2}};
    auto v4 = std::vector<std::vector<int>>{{0,0},{1,1}};
    auto v5 = std::vector<std::vector<int>>{{1,1},{1,2},{2,2},{2,1},{0,2},{2,0},{1,0},{0,1},{0,0}};
    std::cout<<"Result should be A      . Result: "<<so.tictactoe(v1)<<std::endl;
    std::cout<<"Result should be B      . Result: "<<so.tictactoe(v2)<<std::endl;
    std::cout<<"Result should be Draw   . Result: "<<so.tictactoe(v3)<<std::endl;
    std::cout<<"Result should be Pending. Result: "<<so.tictactoe(v4)<<std::endl;
    std::cout<<"Result should be A      . Result: "<<so.tictactoe(v5)<<std::endl;
    return 0;
}
