#include <iostream>
#include <vector>
#include <list>

//std::string input = "()[]{}";
//std::string input = "([)]";
//std::string input = "{[]}";
std::string input = "()";

short get_size(char c){
    switch(c){
        case '(':
            return 1;
        case ')':
            return -1;
        case '[':
            return 2;
        case ']':
            return -2;
        case '{':
            return 3;
        case '}':
            return -3;
        default:
            return 100;
    }
}

bool isValid(std::string s) {
    std::list<short> v;
    short l_value = 0;
    for(auto c : s){
        short value = get_size(c);
        if(value > 0){
            v.push_back(value);
            l_value = value;
        }
        else{
            if(l_value == abs(value)){
                v.pop_back();
                l_value = v.back();
            }
            else return false;
        }
    }
    return v.size() <= 0;
}



int main() {
    auto a = isValid(input);
    return 0;
}
