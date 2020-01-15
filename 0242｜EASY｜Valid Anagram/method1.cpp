#include <map>
#include <iostream>
#include <algorithm>

//class Solution {
//public:
//    bool isAnagram(std::string s, std::string t) {
//        if(s.length() != t.length()) return false;
//        std::sort(s.begin(), s.end());
//        std::sort(t.begin(), t.end());
//        return s == t;
//    }
//};

class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
        if(s.length() != t.length()) return false;
        auto alphas = std::map<char, int>{{'a', 0}, {'b', 0}, {'c', 0}, {'d', 0},{'e', 0}, {'f', 0}, {'g', 0}, {'h', 0},
                                          {'i', 0}, {'g', 0}, {'k', 0}, {'l', 0},{'m', 0}, {'n', 0}, {'o', 0}, {'p', 0},
                                          {'q', 0}, {'r', 0}, {'s', 0}, {'t', 0},{'u', 0}, {'v', 0}, {'w', 0}, {'x', 0},
                                          {'y', 0}, {'z', 0}
        };
        for(auto c : s)alphas[c]++;
        for(auto c : t)alphas[c]--;
        for(auto v : alphas)if(v.second != 0) return false;

        return true;
    }
};

int main(){
    auto so = Solution();
    std::cout<<so.isAnagram("rat", "car")<<std::endl;
    std::cout<<so.isAnagram("anagram", "nagaram")<<std::endl;
    return 0;
}