#include <iostream>
#include <vector>
#include <algorithm>
#include <map>


class Solution {
public:
    std::vector<std::vector<int>> shiftGrid(std::vector<std::vector<int>>& grid, int k) {
        int rowN = grid.size(), colN = grid[0].size(), total = rowN * colN;
        std::vector<std::vector<int>> rs;
        rs.resize(rowN);
        for(auto& row : rs) row.resize(colN);
        for(int i = 0; i < total; i++){
            int loc = (i + k) % total;
            rs[loc / colN][loc % colN] = grid[i / colN][i % colN];
        }
        return rs;
    }
};

int main() {
    Solution so;
    auto v1 = std::vector<std::vector<int>>{{1,2,3},{4,5,6},{7,8,9}};
    auto v2 = std::vector<std::vector<int>>{{3,8,1,9},{19,7,2,5},{4,6,11,10},{12,0,21,13}};
    for(auto& row : so.shiftGrid(v1, 1)) for(auto num : row) std::cout<<num<<" ";
    std::cout<<std::endl;
    for(auto& row : so.shiftGrid(v2, 4)) for(auto num : row) std::cout<<num<<" ";
    return 0;
}
