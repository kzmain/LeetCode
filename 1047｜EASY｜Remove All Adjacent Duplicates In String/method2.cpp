#include <iostream>
#include <vector>
#include <set>

class Solution {
public:
    std::string removeDuplicates(std::string S) {
        int loc = 0;
        for(auto c : S) if(loc == 0 || (loc > 0 && S[loc - 1] != c)){S[loc] = c;loc ++;} else{if(loc > 0) loc --;}
        S.resize(loc);
        return S;
    }
};


int main(){
    Solution so;
    std::cout<<so.removeDuplicates("abbaca")<<" ";
    std::cout<<std::endl;
}
