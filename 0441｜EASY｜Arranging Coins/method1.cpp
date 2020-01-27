#include <iostream>
#include <algorithm>
#include <vector>

class Solution {
public:
    int arrangeCoins(int n) {
        unsigned long long  rs = 0, tp = (1 + rs + 1) * (rs + 1) / 2, bd = n;
        while(tp <= bd) tp = (1 + (++rs) + 1) * (rs + 1) / 2;
        return (int)rs;
    }
};

int main() {
    Solution so;
    std::cout << "Result should be: 0. Result: " << so.arrangeCoins(0) << std::endl;
    std::cout << "Result should be: 2. Result: " << so.arrangeCoins(3) << std::endl;
    std::cout << "Result should be: 2. Result: " << so.arrangeCoins(5) << std::endl;
    std::cout << "Result should be: 3. Result: " << so.arrangeCoins(8) << std::endl;
    std::cout << "Result should be: 60070. Result: " << so.arrangeCoins(1804289383) << std::endl;
    return 0;
}
