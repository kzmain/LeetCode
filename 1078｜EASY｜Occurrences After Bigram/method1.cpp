#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<std::string> findOcurrences(std::string text, std::string first, std::string second) {
        std::vector<std::string> res; std::string s; int count = 0;
        for(auto c : text){
            if(c ==' ') {res.push_back(s);s = "";}
            else        {s += c;}
        }
        if(!s.empty()) res.push_back(s);
        for(int i = 0; i + 2 < res.size(); i ++){
            if(res[i] == first && res[i + 1] == second){
                res[count] = res[i + 2];
                count ++;
            }
        }
        res.resize(count);
        return res;
    }
};

int main() {
    Solution so;
//    for(auto a : so.findOcurrences("we will we will rock you", "we", "will"))
//        std::cout<<a<<" ";

    for(auto a : so.findOcurrences("alice is a good girl she is a good student", "a", "good"))
        std::cout<<a<<" ";
    return 0;
}
