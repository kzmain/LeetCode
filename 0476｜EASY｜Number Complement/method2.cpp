#include <iostream>
#include <algorithm>
#include <stack>

class Solution {
public:
    std::string reverseWords(std::string s) {
        std::stack<char> tp;
        std::string str = s;
        int loc = 0;
        for(char c : s){
            if(c == ' '){
                while(!tp.empty()){
                    str[loc]  = tp.top();
                    tp.pop();
                    loc++;
                }
                loc++;
            }else{
                tp.push(c);
            }
        }
        while(!tp.empty()){
            str[loc]  = tp.top();
            tp.pop();
            loc++;
        }
        return str;
    }
};

int main() {
    Solution so;
    std::string str1 = "Let's take LeetCode contest";
    std::cout << R"(Result should be: "s'teL ekat edoCteeL tsetnoc". Result: ")"<< so.reverseWords(str1) <<"\""<< std::endl;
    return 0;
}
