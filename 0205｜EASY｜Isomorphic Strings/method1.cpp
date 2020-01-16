#include <map>
#include <iostream>
#include <algorithm>
#include <set>
#include <vector>

class Solution {
public:
    char r = '@';
    bool checker(std::string& s, std::string& t, char sc, char tc){
        for(int i = 0; i < (int)s.size(); i++){
            if(sc != r && s[i] == r) continue;

            if     (s[i] == sc && t[i] != tc) return false;
            else if(s[i] == sc && t[i] == tc) s[i] = r;
        }
        return true;
    }

    bool isIsomorphic(std::string s, std::string t) {
        if(s.size() != t.size()) return false;
        int start = 0;std::set<char> st;
        for(int i = 0; i < (int)s.size(); i++){
            if(s[i] == r){
                if(!checker(s, t, s[i], t[i])){return false;}else{st.insert(r);break;}
            }
        }
        while(start != s.size()){
            for(int i = 0; i < (int)s.size(); i++){
                if(s[i] == r){continue;}
                if(st.count(t[i]) != 0) return false;
                if(!checker(s, t, s[i], t[i])){
                    return false;
                }
                else{
                    st.insert(t[i]);
                    break;
                }
            }
            for(start = 0; start < (int)s.size(); start++){
                if(s[start] != r) break;
            }
        }
        return true;
    }
};

int main(){
    auto so = Solution();
    std::cout<<"It is: "<<so.isIsomorphic("egg", "add")<<std::endl;
    std::cout<<"It is: "<<so.isIsomorphic("foo", "bar")<<std::endl;
    std::cout<<"It is: "<<so.isIsomorphic("foo", "aaa")<<std::endl;
    std::cout<<"It is: "<<so.isIsomorphic("paper", "title")<<std::endl;
}