#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <cmath>

class Solution {
public:
    bool isPowerOfFour(int num) {
        int r = 0;
        while(num != 0){
            r = num % 4;
            num /= 4;
            if(r > 0 && num != 0) return false;
        }
        return r == 1;
    }
};

int main(){
    Solution so;
    std::cout<<so.isPowerOfFour(3)<<std::endl;
}