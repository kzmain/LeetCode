#include <iostream>
#include <vector>
#include <list>

std::string str_a = "11";
std::string str_b = "1";

std::string addBinary(std::string a, std::string b) {
    std::list<int> result;
    short plus = 0;
    std::reverse(a.begin(),a.end());
    std::reverse(b.begin(),b.end());

    std::string longer, shorter;
    if(a.size() >= b.size()){ longer = a; shorter = b;}
    else{                     longer = b; shorter = a;}
    unsigned long offset = 0;
    for(; offset < shorter.size(); offset++){
        if(longer[offset] == '1' && shorter[offset] == '1'){
            result.push_back(0 + plus);
            plus = 1;
        }else if(longer[offset] == '0' && shorter[offset] == '0'){
            result.push_back(0 + plus);
            plus = 0;
        } else{
            if(1 + plus > 1){
                result.push_back(0);
                plus = 1;
            }
            else{
                result.push_back(1);
                plus = 0;
            }
        }
    }
    for(; offset < longer.size(); offset++){
        if(longer[offset] == '1'){
            if(1 + plus > 1){
                result.push_back(0);
                plus = 1;
            }
            else{
                result.push_back(1);
                plus = 0;
            }
        }
        else{
            result.push_back(0 + plus);
            plus = 0;
        }
    }
    if(plus != 0){result.push_back(1);}
    result.reverse();
    std::string re_str;
    for(auto e : result){
        re_str += std::to_string(e);
    }
    return re_str;
}


int main() {
    auto a = addBinary(str_a, str_b);
    return 0;
}
