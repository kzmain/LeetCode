#include <map>
#include <iostream>
#include <algorithm>
#include <set>
#include <vector>


class Solution {
public:
    bool wordPattern(std::string pattern, std::string str) {
        std::map<char, std::string> mp;
        std::set<std::string>       st;

        int loc = 0, bound = (int)str.size();
        for(auto symbol : pattern){
            std::string word;
            for(; loc < bound; loc++){
                if     (str[loc] != ' ') word += str[loc];
                else if(str[loc] == ' ' && !word.empty()) break;
            }
            if(loc == bound && word.empty()) return false;

            if(mp[symbol].empty()){
                if(st.count(word) != 0) return false;
                mp[symbol] = word;
                st.insert(word);
            }
            if(mp[symbol] != word) return false;
        }
        return loc == bound;
    }
};


int main(){
    auto so = Solution();
    std::cout<<so.wordPattern("abc", "b c a")<<std::endl;
    std::cout<<so.wordPattern("abba", "dog cat cat dog")<<std::endl;
    std::cout<<so.wordPattern("aaaa", "dog dog dog dog")<<std::endl;
    std::cout<<so.wordPattern("he", "unit")<<std::endl;
    std::cout<<so.wordPattern("abba", "dog cat cat fish")<<std::endl;
    std::cout<<so.wordPattern("aaaa", "dog cat cat dog")<<std::endl;
    std::cout<<so.wordPattern("abba", "dog dog dog dog")<<std::endl;
}