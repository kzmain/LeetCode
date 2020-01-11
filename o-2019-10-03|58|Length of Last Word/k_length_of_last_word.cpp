#include <iostream>
#include <vector>
#include <list>

std::string input = "a ";

int lengthOfLastWord(std::string s) {
    short pre_empty = true;
    int count = 0;
    for(auto c : s){
        if(c != ' '){
            if(pre_empty){
                pre_empty = false;
                count = 0;
            }
            count++;
        }
        else pre_empty = true;
    }
    return count;
}


int main() {
    auto a = lengthOfLastWord(input);
    return 0;
}
