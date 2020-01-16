#include <map>
#include <iostream>
#include <algorithm>
#include <set>
#include <vector>


class Solution {
public:
   bool isIsomorphic(std::string s, std::string t) {
       if(s.size() != t.size()) return false;
       std::map<char, char> mp;
       std::set<char>       st;
       int loc = 0, bound = (int)t.size();
       for(auto c : s){
           char checker = t[loc];
           if(mp[c] == 0){
               if(st.count(checker) != 0) return false;
               mp[c] = checker;
               st.insert(checker);
           }
           if(mp[c] != checker) return false;
           loc ++;
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