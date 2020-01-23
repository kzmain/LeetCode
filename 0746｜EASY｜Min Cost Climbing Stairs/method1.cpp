#include <iostream>
#include <vector>

class Solution {
    int getCost(std::vector<int> vec, int pivot, int size, int sum){
        if(pivot >= size) return sum;
        else sum += vec[pivot];
        return std::min(getCost(vec, pivot + 1, size, sum), getCost(vec, pivot + 2, size, sum));
    }
public:
    int minCostClimbingStairs(std::vector<int>& cost) {
        int size = cost.size();
        return std::min(getCost(cost, 0, size, 0), getCost(cost, 1, size, 0));
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