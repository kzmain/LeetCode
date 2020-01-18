#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
class Solution {
public:
    std::string freqAlphabets(std::string s) {
        std::string res;
        for(int i = s.size() - 1; i > -1 ; i--){
            if(s[i] == '#'){
                res.insert(res.begin(), (char)(s[i - 2] * 10 + s[i - 1]+ 80));
                i -= 2;
            }else{
                res.insert(res.begin(), (char)(s[i] + 48));
            }
        }
        return res;
    }
};


int main(){
    Solution so;
    std::string str_dec = "12345678910#11#12#13#14#15#16#17#18#19#20#21#22#23#24#25#26#";
    std::cout<<so.freqAlphabets(str_dec);
}