#include <iostream>
#include <vector>
#include <set>

class Solution {
    bool inRow1(char c){
        return c == 'q' || c == 'w' ||
        c == 'e' || c == 'r' ||
        c == 't' || c == 'y' ||
        c == 'u' || c == 'i' ||
        c == 'o' || c == 'p';
    }

    bool inRow2(char c){
        return c == 'a' || c == 's' ||
               c == 'd' || c == 'f' ||
               c == 'g' || c == 'h' ||
               c == 'j' || c == 'k' ||
               c == 'l';
    }

    bool inRow3(char c){
        return c == 'z' || c == 'x' ||
               c == 'c' || c == 'v' ||
               c == 'b' || c == 'n' ||
               c == 'm';
    }

    bool checker(std::string word){
        if (inRow1((char)std::tolower(word[0]))){
            for(auto c : word){
                if(!inRow1((char)std::tolower(c))) return false;
            }
        }
        else if (inRow2((char)std::tolower(word[0]))){
            for(auto c : word){
                if(!inRow2((char)std::tolower(c))) return false;
            }
        }
        else{
            for(auto c : word){
                if(!inRow3((char)std::tolower(c))) return false;
            }
        }
        return true;
    }
public:
    std::vector<std::string> findWords(std::vector<std::string>& words) {
        std::vector<std::string> rs;
        for(auto& word : words){
            if(checker(word)) rs.push_back(word);
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