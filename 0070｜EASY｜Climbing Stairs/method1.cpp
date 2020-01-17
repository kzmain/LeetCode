#include <iostream>

//@CAUTION TIMEOUT
class Solution {
   int stairs;
public:
   void update(int target, int upper, int add){
       upper += add;
       if(upper == target){stairs++; return;}
       if(upper >  target){return;}
       update(target, upper, 1);
       update(target, upper, 2);
   }
   int climbStairs(int n) {
       stairs = 0;
       update(n, 0, 0);
       return stairs;
   }
};

int main(){
    Solution so;
    std::cout<<so.climbStairs(5)<<std::endl;
}