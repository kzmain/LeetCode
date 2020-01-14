#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <cmath>

class Solution {
public:
    bool isPowerOfFour(int num) {
        if (n == 1) return true;
        else if (n < 4) return false;
        while (n % 4 == 0) n /= 4;
        return n == 1;
    }
};

int main(){
    Solution so;
    std::cout<<so.isPowerOfFour(4)<<std::endl;
}