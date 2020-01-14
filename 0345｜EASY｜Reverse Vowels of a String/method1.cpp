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

int main(){
    Solution so = Solution();
    std::cout<<so.reverseVowels("hello")<<std::endl;
    std::cout<<so.reverseVowels("leetcode")<<std::endl;
}
