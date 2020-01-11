#include <iostream>
#include <vector>

std::vector<std::string> in = {"flower", "flow", "flight"};

std::string longestCommonPrefix(std::vector<std::string>& strs) {
    std::string res = strs[0];
    for(auto &str : strs){
        auto len = res.size() > str.size() ? str.size() : res.size();
        std::string temp_res;
        for(int i = 0; i < len; i++){
            if(res[i] == str[i]) temp_res += str[i];
            else break;
        }
        res = temp_res;
    }
    return res;
}

int main() {
//    std::cout << "Hello, World!" << std::endl;
    auto s = longestCommonPrefix(in);
    return 0;
}

/* note
#Conditional operator
line 9 : Exp1 ? Exp2 : Exp3;    // if Exp1 is true -> Exp2,  else -> Exp3.
 判断所有string里的长度，找出最短

line 8 : for新写法
 &str : strs -> 逐个循环strs里的数据， flower， flow， flight

 line 6
 标准格式：std::string longestCommonPrefix(std::vector<std::string>& strs)
 retrun_value_type -- string
 name -- longestCommon...
 () -- parameters
 &strs -- 传入数据 / 名字（任意取
