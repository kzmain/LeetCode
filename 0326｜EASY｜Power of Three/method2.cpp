#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <cmath>

class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n == 1) return true;
        else if (n < 3) return false;
        while (n%3 == 0) n /= 3;
        return n == 1;
    }
};

int main(){
    Solution so;
    std::cout<<so.isPowerOfThree(3)<<std::endl;
}