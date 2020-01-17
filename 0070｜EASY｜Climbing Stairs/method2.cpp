#include <iostream>

class Solution {
public:
    int climbStairs(int n) {
        int n_2 = 1, n_1 = 2;
        if(n == 1)      return n_2;
        else if(n == 2) return n_1;
        for(int i = 3; i <= n; i ++){n_1 += n_2;n_2 = n_1 - n_2;}
        return n_1;
    }
};

int main(){
    Solution so;
    std::cout<<so.climbStairs(5)<<std::endl;
}