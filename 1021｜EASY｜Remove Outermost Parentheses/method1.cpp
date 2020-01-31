#include <iostream>
#include <stack>

class Solution {
public:
    std::string removeOuterParentheses(std::string S) {
        std::stack<char> sk;
        int skSize;
        std::string rt;
        for(char c : S){
            if(c == '(') {
                if(!sk.empty()) rt.push_back(c);
                sk.push(c);
            }
            else{
                sk.pop();
                if(!sk.empty()) rt.push_back(c);
            }
        }
        return rt;
    }
};

int main() {
    Solution so;

    std::string str1 = "(()())(())";
    std::string str2 = "(()())(())(()(()))";
    std::string str3 = "()()";

    std::cout << "Result should be: \"()()()\"      .   Result: \"" << so.removeOuterParentheses(str1) << "\""<<std::endl;
    std::cout << "Result should be: \"()()()()(())\".   Result: \"" << so.removeOuterParentheses(str2) << "\""<<std::endl;
    std::cout << "Result should be: \"\"            .   Result: \"" << so.removeOuterParentheses(str3) << "\""<<std::endl;
    return 0;
}