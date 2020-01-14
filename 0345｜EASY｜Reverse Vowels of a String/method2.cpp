#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_set>、
#include <set>

class Solution {
public:
   std::string reverseVowels(std::string s) {
       std::vector<int> pos{};
       std::string      chars;

       for(int loc = 0; loc < (int)s.length(); loc++){
           if(s[loc] == 'a' or
              s[loc] == 'e' or
              s[loc] == 'i' or
              s[loc] == 'o' or
              s[loc] == 'u' or
              s[loc] == 'A' or
              s[loc] == 'E' or
              s[loc] == 'I' or
              s[loc] == 'O' or
              s[loc] == 'U'){
               chars += s[loc];
               pos.push_back(loc);
           }
       }
       auto size = (int)pos.size();
       for(int i = 0; i < size; i++){
           s[pos[i]] = chars[size - i - 1];
       }
       return s;
   }
};


int main(){
    Solution so = Solution();
    std::cout<<so.reverseVowels("hello")<<std::endl;
    std::cout<<so.reverseVowels("leetcode")<<std::endl;
}