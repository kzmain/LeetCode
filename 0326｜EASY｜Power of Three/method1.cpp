#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <cmath>

class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n == 1) return true;
        int r;
        while(n != 0){
            r = n % 3;
            n = n / 3;
        }
        return r == 0;
    }
};

int main(){
    Solution so;
    std::cout<<so.isPowerOfThree(3)<<std::endl;
}