#include <map>
#include <iostream>
#include <algorithm>
#include <set>


class Solution {
public:
    std::string countAndSay(int n) {
        if(n < 1 or n > 30) return "";

        int itr = 1;
        std::string chars = "1";

        while(itr < n){
            std::string temp;
            char        prev = chars[0];
            int        count = 0;
            for (char c : chars) {
                if(c == prev){
                    count ++;
                }else{
                    temp += std::to_string(count) + prev;
                    prev = c;
                    count = 1;
                }
            }
            temp += std::to_string(count) + prev;
            chars = temp;
            itr ++;
        }
        return chars;
    }
};

int main(){
    auto so = Solution();
//    std::cout<<so.countAndSay(1)<<std::endl;
    std::cout<<so.countAndSay(6)<<std::endl;
}