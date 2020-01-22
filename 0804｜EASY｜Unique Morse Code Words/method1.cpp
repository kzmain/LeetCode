#include <iostream>
#include <vector>
#include <unordered_set>
#include <set>

class Solution {
    std::vector<std::string> alphabet {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
public:
    int uniqueMorseRepresentations(std::vector<std::string>& words) {
        std::set<std::string> rSet;
        for(const std::string& word :words){
            std::string rStr;
            for(char c : word) rStr += alphabet[c - 97];
            rSet.insert(rStr);
        }
        return rSet.size();
    }
};

int main(){
    Solution so;
    std::vector<std::string> v1 = {"gin", "zen", "gig", "msg"};
    std::cout<<so.uniqueMorseRepresentations(v1);
}