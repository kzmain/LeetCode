#include <iostream>
#include <set>
#include <stack>

class Solution {
public:
    bool judgeCircle(std::string moves) {
        if(!(int)moves.size() % 2) return false;
        int pos = 0;
        for(char c : moves){
            if(c == 'D')      pos -= 'U';
            else if(c == 'L') pos -= 'R';
            else              pos += c;
        }
        return pos == 0;
    }
};

int main(){
    Solution so;

    std::cout<<so.judgeCircle("UD");
}