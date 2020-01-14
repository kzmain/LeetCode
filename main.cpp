#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_set>、
#include <set>

class Solution {
public:
    std::string reverseVowels(std::string s) {
        std::vector<int> pos{};
        std::set<char>   vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        std::string      chars;

        for(int loc = 0; loc < (int)s.length(); loc++){
            if(vowels.find(s[loc]) != vowels.end()){
                chars += s[loc];
                pos.push_back(loc);
            }
        }
        for(auto c : chars){
            s[pos.back()] = c;
            pos.pop_back();
        }
        return s;
    }
};

//class Solution {
//public:
//    std::string reverseVowels(std::string s) {
//        std::vector<int> pos{};
//        std::string      chars;
//
//        for(int loc = 0; loc < (int)s.length(); loc++){
//            if(s[loc] == 'a' or
//               s[loc] == 'e' or
//               s[loc] == 'i' or
//               s[loc] == 'o' or
//               s[loc] == 'u' or
//               s[loc] == 'A' or
//               s[loc] == 'E' or
//               s[loc] == 'I' or
//               s[loc] == 'O' or
//               s[loc] == 'U'){
//                chars += s[loc];
//                pos.push_back(loc);
//            }
//        }
//        auto size = (int)pos.size();
//        for(int i = 0; i < size; i++){
//            s[pos[i]] = chars[size - i - 1];
//        }
//        return s;
//    }
//};


int main(){
    Solution so = Solution();
    std::cout<<so.reverseVowels("hello")<<std::endl;
    std::cout<<so.reverseVowels("leetcode")<<std::endl;
}