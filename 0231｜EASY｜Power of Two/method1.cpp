#include <map>
#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
#include <stack>

class Solution {
public:
   bool isPowerOfTwo(int n) {
       if(n < 1) return false;
       int r = 0;
       while(n != 1){r = n % 2; n = n / 2; if(r != 0) return false;}
       return true;
   }
};

int main(){
    Solution so = Solution();
    std::cout<<so.isPowerOfTwo(1)<<std::endl;
    std::cout<<so.isPowerOfTwo(16)<<std::endl;
    std::cout<<so.isPowerOfTwo(5)<<std::endl;
    std::cout<<so.isPowerOfTwo(218)<<std::endl;
}