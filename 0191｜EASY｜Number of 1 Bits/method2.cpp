#include <iostream>
#include <vector>
#include <set>
#include <queue>
#include <algorithm>
#include <unordered_set>
#include <cmath>
#include <bitset>

class Solution {
public:
   int hammingWeight(uint32_t n) {
       int count = 0;
       while(n != 0){if(n % 2 == 1) count++; n /= 2;}
       return count;
   }
};


int main(){
    Solution so;
    uint32_t t1 = 00000000000000000000000000001011;
    uint32_t t2 = 00000000000000000000000010000000;
    std::cout<<so.hammingWeight(t1)<<std::endl;
    std::cout<<so.hammingWeight(t2)<<std::endl;
    std::cout<<so.hammingWeight(INT_MAX)<<std::endl;
}