#include <iostream>
#include <vector>
#include <set>

class Solution {
public:
    std::string removeDuplicates(std::string S) {
        if(S.size() < 2) return S;
        std::vector<char> vec; std::string res = "";
        for(auto c : S)if(!vec.empty() && *--vec.end() == c) vec.pop_back();else vec.push_back(c);
        for(auto c : vec) res += c;
        return res;
    }
};

int main(){
    Solution so;
    std::cout<<so.removeDuplicates("abbaca")<<" ";
    std::cout<<std::endl;
}
