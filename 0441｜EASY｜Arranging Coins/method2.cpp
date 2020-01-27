#include <iostream>
#include <algorithm>
#include <vector>

class Solution {
public:
    int arrangeCoins(int n) {
        //Using the formula for sum of arithmetic series: 
        //n = k/2 * (2a + (k - 1) * d)--> a = 1st number in series, d = common difference
        //Sample series = 1, 2, 3, 4, 5, ..., k : a = 1, d = 1
        //n = k/2 * (2(1) + (k - 1) * 1) = k/2 * (k + 1)
        //n = k^2/2 + k/2 --> 0.5k^2 + 0.5k - n = 0
        //Multiply through by 2 --> k^2 + k - 2n = 0
        //a = 1, b = 1, c = -2n
        //return the result using almighty formula;
        //k = -1 + sqrt((1)^2 - (4 * 1 * -2n)) / 2(1) = -1 + sqrt(1 + 8n) / 2
        return ((1 + (long)sqrt(1 + (8 * (long)n))) / 2) - 1;
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
