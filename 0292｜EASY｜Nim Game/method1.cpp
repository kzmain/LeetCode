#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <cmath>

class Solution {
public:
    bool canWinNim(int n) {
        return n % 4;
    }
};

int main(){
    Solution so;
    std::cout<<so.canWinNim(4)<<std::endl;
}