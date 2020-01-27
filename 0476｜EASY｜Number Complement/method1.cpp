#include <iostream>
#include <algorithm>
#include <stack>

class Solution {
public:
    std::string reverseWords(std::string s) {
        std::string str, tp;
        for(char c : s){
            if(c == ' '){
                std::reverse(tp.begin(), tp.end());
                str += tp + " ";
                tp = "";
            }else{
                tp += c;
            }
        }
        std::reverse(tp.begin(), tp.end());
        str += tp;
        return str;
    }
};

int main() {
    Solution so;
    std::string str1 = "Let's take LeetCode contest";
    std::cout << R"(Result should be: "s'teL ekat edoCteeL tsetnoc". Result: ")"<< so.reverseWords(str1) <<"\""<< std::endl;
    return 0;
}
