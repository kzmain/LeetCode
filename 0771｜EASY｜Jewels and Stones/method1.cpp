#include <iostream>
#include <vector>
#include <set>


class Solution {
public:
    int numJewelsInStones(std::string J, std::string S) {
        int res = 0, cnt;
        if(J.empty() or S.empty()) return res;
        std::set<char> st;
        for(auto j : J) st.insert(j);
//        for(auto s : S) if(st.count(s)) res++;
        for(int i = 0; i < S.size(); i++){
            cnt = 1;
            while(i + 1< S.size() && S[i] == S[i + 1]){cnt++;i++;}
            if(st.count(S[i])) res += cnt;
        }
        return res;
    }
};


int main(){
    Solution so;
    std::cout<<so.numJewelsInStones("aA", "aAAbbbb")<<" ";
}