#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    std::string defangIPaddr(std::string address) {
        std::string res;
        for(char c : address){if(c == '.'){res += '[';res += c;res += ']';}else{res += c;}}
        return res;
    }
};

int main() {
    Solution so;
//    so.distributeCandies(20, 3);
    std::cout<<so.defangIPaddr("126.148.1.1");
    return 0;
}
