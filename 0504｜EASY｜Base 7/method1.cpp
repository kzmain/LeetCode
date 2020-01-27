#include <iostream>
#include <algorithm>
#include <stack>

class Solution {
public:
    std::string convertToBase7(int num) {
        bool bZero = num < 0;
        int cnt = 0;
        num = std::abs(num);
        std::string rs;
        rs.resize(11);

        while (num / 7){
            rs[cnt++] = 48 + (num % 7);
            num /= 7;
        }
        rs[cnt++] = 48 + num;
//        rs.push_back(48 + num);
//        if(bZero) rs.push_back('-');
        if(bZero) rs[cnt++] = '-';
        rs.resize(cnt);
        std::reverse(rs.begin(), rs.end());
        return rs;
    }
};

int main() {
    Solution so;
    int num1 = 100;
    int num2 = -7;
    int num3 = -8;
    std::cout << "Result should be: 202. Result: "<< so.convertToBase7(num1) << std::endl;
    std::cout << "Result should be: -10. Result: "<< so.convertToBase7(num2) << std::endl;
    std::cout << "Result should be: -11. Result: "<< so.convertToBase7(num3) << std::endl;
    return 0;
}
