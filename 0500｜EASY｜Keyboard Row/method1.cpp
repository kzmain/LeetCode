#include <iostream>
#include <vector>
#include <set>

class Solution {
   std::vector<std::set<char>> rSets{{'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p'},
                                      {'a', 's', 'd', 'f', 'g', 'g', 'h', 'j', 'k', 'l'},
                                      {'z', 'x', 'c', 'v', 'b', 'n', 'm'}};
public:
   std::vector<std::string> findWords(std::vector<std::string>& words) {
       std::vector<std::string> rs;
       for(auto& word : words){
           for(auto& rSet : rSets){
               if(rSet.count(std::tolower(word[0]))){
                   bool can = true;
                   for(auto& c : word){
                       if(!rSet.count(std::tolower(c))){
                           can = false;
                           break;}
                   }
                   if(can) rs.push_back(word);
               }
           }
       }
       return rs;
   }
};

int main() {
    Solution so;
    auto v1 = std::vector<std::string>{"Hello", "Alaska", "Dad", "Peace"};
    std::cout << R"(Result should be: ["Alaska", "Dad"]. Result: )";
    std::cout<<"[";
    for(auto& str : so.findWords(v1)) std::cout<<"\""<<str<<"\", ";
    std::cout<<"]";
    return 0;
}