#include <iostream>

class Solution {
public:
    bool detectCapitalUse(std::string word) {
        int size = word.size();
        if(size < 2) return true;
        if     (word[0] <= 90 && word[1] <= 90){for(int i = 2; i < word.size(); i++) if(word[i] >  90) return false;}
        else if(                 word[1] >  90){for(int i = 2; i < word.size(); i++) if(word[i] <= 90) return false;}
        else return false;
        return true;
    }
};

int main() {
    Solution so;
    std::cout << "Result should be: 1     . Result: "<< so.detectCapitalUse("USA" ) << std::endl;
    std::cout << "Result should be: 0     . Result: "<< so.detectCapitalUse("FlaG") << std::endl;
    std::cout << "Result should be: 0     . Result: "<< so.detectCapitalUse("mL"  ) << std::endl;
    return 0;
}
