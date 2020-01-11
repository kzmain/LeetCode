#include <iostream>
#include <map>
std::string in = "MCMXCIV";
//std::string  in = "III";
//std::string in = "XIX";
int romanToInt(std::string s) {
    std::map<char, int> value_map {
            {'I',1},
            {'V',5},
            {'X',10},
            {'L',50},
            {'C',100},
            {'D',500},
            {'M',1000}
    };
    int res = 0;

    for(int i = s.size()-1; i > -1; i--){
        //好好命名变量！！！！！！！！！！  value_map
        int val = value_map[s[i]];
        if(i > 0 && value_map[s[i]] <= value_map[s[i - 1]])
            res += val;
        else if (i > 0 && value_map[s[i]] > value_map[s[i - 1]]){
            res += (value_map[s[i]] - value_map[s[i - 1]]);
            i--;
        }else{
            res += val;
        }

        //更加好的解法！！！！！
        // 做判断是为了 （相减） ——— 所以做完判断应立马接着做要做的东西（相减）
//        if (i > 0 && value_map[s[i]] > value_map[s[i-1]]){
//            res += (value_map[s[i]]-value_map[s[i-1]]);
//            i--;
//        }else{
//            res += val;
//        }
    }
    return res;
}

int main() {
//    std::cout << "Hello, World!" << std::endl;
    auto a = romanToInt(in);
    return 0;
}