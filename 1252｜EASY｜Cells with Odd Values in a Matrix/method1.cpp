#include <iostream>
#include <vector>
#include <algorithm>
#include <map>


class Solution {
public:
    int oddCells(int n, int m, std::vector<std::vector<int>>& indices) {
        std::vector<std::vector<int>> rs;
        rs.resize(n);
        for(int i = 0; i < n; i++) rs[i] = std::vector<int> (m, 0);
        for(auto pair : indices){
            for(auto& num : rs[pair[0]]) num++;
            for(auto& row : rs         ) row[pair[1]]++;
        }
        int count = 0;
        for(auto& row : rs) for(auto num : row) if(num % 2) count++;
        return count;
    }
};

int main() {
    Solution so;
    auto v1 = std::vector<std::vector<int>>{{0,1},{1,1}};
    auto v2 = std::vector<std::vector<int>>{{1,1},{0,0}};
    std::cout<<"Result should be: 6. Result: "<<so.oddCells(2, 3, v1)<<"."<<std::endl;
    std::cout<<"Result should be: 0. Result: "<<so.oddCells(2, 2, v2)<<"."<<std::endl;
    return 0;
}
