#include <iostream>
#include <vector>

class Solution {
public:
    int minCostClimbingStairs(std::vector<int>& cost) {
        int size = (int)cost.size();
        cost.resize( size + 1);
        for(int i = 2; i <= size; i++) cost[i] += std::min(cost[i - 1], cost[i - 2]);
        return cost[size];
    }
};

int main(){
    Solution so;
    std::vector<int> v1 = {10, 15, 20};
    std::vector<int> v2 = {1, 100, 1, 1, 1, 100, 1, 1, 100, 1};
    std::vector<int> v3 = {0, 0, 0, 0};
    std::cout<<"Should be : 15 Result: "<<so.minCostClimbingStairs(v1)<<std::endl;
    std::cout<<"Should be : 6  Result: "<<so.minCostClimbingStairs(v2)<<std::endl;
    std::cout<<"Should be : 0  Result: "<<so.minCostClimbingStairs(v3)<<std::endl;
}
