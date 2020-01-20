#include <iostream>
#include <set>

class Solution {
public:
   int maximum69Number (int num) {
       if(num == 9 or num == 99 or num == 999 or num == 9999 or num == 99999 or num == 999999 or num == 9999999 or num == 99999999 or num == 999999999) return num;
       int loc = -1, base = num, iter = 0;
       for(; base / 10; iter++){
           if(base % 10 == 6) loc = iter;
           base /= 10;
       }
       if(base == 6) loc = iter;
       if(loc > -1) num += (int)std::pow(10, loc) * 3;
       return num;
   }
};

int main(){
    Solution so;
    std::cout<<so.maximum69Number(6);
}