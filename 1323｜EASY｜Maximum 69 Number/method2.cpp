#include <iostream>
#include <set>

class Solution {
public:
    int maximum69Number (int num) {
        if(num == 9 or num == 99 or num == 999 or num == 9999 or num == 99999 or num == 999999 or num == 9999999 or num == 99999999 or num == 999999999) return num;
        auto sNum = std::to_string(num);
        for(int i = 0; i < sNum.size(); i++){if(sNum[i] == '6'){sNum[i] = '9';return std::stoi(sNum);}}
        return num;
    }
};

int main(){
    Solution so;
    std::cout<<so.maximum69Number(6);
}