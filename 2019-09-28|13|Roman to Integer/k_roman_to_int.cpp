#include <iostream>
#include <map>

std::string input = "MCMXCIV";

int romanToInt(std::string s) {
    int result = 0;
    std::map<char, int> roman_val =
            {{'I', 1   }, {'V', 5  }, {'X', 10},
             {'L', 50  }, {'C', 100}, {'D', 500},
             {'M', 1000}};
    std::map<char, int> roman_loc =
            {{'I', 1}, {'V' ,2}, {'X', 3},
             {'L', 4}, {'C' ,5}, {'D', 6},
             {'M', 7}};
    long len = s.size() - 1;
    for(; len > -1; len --){
        if ((len > 0) && (roman_loc[s[len]] > roman_loc[s[len -1]])){
            result += roman_val[s[len]] - roman_val[s[len -1]];
            len--;
        }else{
            result += roman_val[s[len]];
        }
    }
    return result;
}
int main() {
    romanToInt(input);
    return 0;
}
