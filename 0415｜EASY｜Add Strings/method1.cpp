#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    std::string addStrings(std::string num1, std::string num2) {
        std::string lon, srt, res;
        int lSize, sSize, diff, add = 0;
        char tem = 0;

        if(num1.size() > num2.size()){lon = num1; srt = num2;}
        else {lon = num2; srt = num1;}
        lSize = lon.size();
        sSize = srt.size();
        diff = lSize - sSize;
        for(int i = lSize - 1; i > -1; i--){
            if(i - diff >= 0) tem = lon[i] - '0' + srt[i - diff] + add;
            else              tem = lon[i] + add;
            if(tem > 57){add = 1; tem -= 10;}
            else        {add = 0;}
            res += tem;
        }
        if(add) res += '1';
        std::reverse(res.begin(), res.end());
        return res;
    }
};

int main() {
    Solution so;
    std::string num1 =  "9999999";
    std::string num2 = "1";
    std::cout << "Result should be: 10000000. Result: " << so.addStrings(num1, num2) << std::endl;
    return 0;
}
