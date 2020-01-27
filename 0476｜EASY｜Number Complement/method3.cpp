#include <iostream>
#include <algorithm>
#include <stack>

class Solution {
    void update(int& sLoc, int& scnt, std::string& str, std::string& s){
        for(int i = cnt;i; i--) str[sLoc + cnt - i] = s[sLoc + i -1];
        sLoc += cnt + 1;
        cnt = 0;
    }
public:
    std::string reverseWords(std::string s) {
        std::string str = s;
        int sLoc = 0, cnt = 0;
        for(char c : s) if(c == ' ')update(sLoc, cnt, str, s); else cnt++;
        update(sLoc, cnt, str, s);
        return str;
    }
};

int main() {
    Solution so;
    std::string str1 = "Let's take LeetCode contest";
    std::cout << R"(Result should be: "s'teL ekat edoCteeL tsetnoc". Result: ")"<< so.reverseWords(str1) <<"\""<< std::endl;
    return 0;
}
