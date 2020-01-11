#include <vector>
#include <iostream>
#include <algorithm>

class Solution {
public:
   bool isPalindrome(std::string s) {
       if(s.empty()) return true;

       auto alpha1 = std::vector<char>{};
       auto alpha2 = std::vector<char>{};

       transform(s.begin(), s.end(), s.begin(), ::tolower);
       for(auto c : s) if(isalpha(c)) alpha1.push_back(c);
       alpha2 = alpha1;
       std::reverse(alpha1.begin(), alpha1.end());
       return alpha1 == alpha2;
   }
};


int main(){
   Solution so = Solution();
   std::cout<<so.isPalindrome("A man, a plan, a canal: Panama");
   std::cout<<so.isPalindrome("race a car");
}