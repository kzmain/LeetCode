#include <iostream>
#include <vector>

std::vector<std::string> input = {"aca", "cba"};

std::string longestCommonPrefix(std::vector<std::string>& strs) {
    //如果输入为0则不用对比
    if(strs.empty()) return "";
    //初始化结果
    std::string result = strs[0];
    for(auto &str : strs){
        //选取最大length，两者长度取最小
        unsigned long max = ( result.size() > str.size() ? str.size(): result.size() );
        std::string t_result;
        for(int i = 0; i < max; i ++){
            if(result[i] == str[i])t_result += result[i];
            //当有一位不一样则匹配停止
            else break;
        }
        result = t_result;
        if(result.empty()) return "";
    }
    return result;
}

int main() {
    longestCommonPrefix(input);
    return 0;
}
