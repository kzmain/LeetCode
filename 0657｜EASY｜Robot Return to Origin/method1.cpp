#include <iostream>
#include <set>
#include <stack>

class Solution {
public:
   bool judgeCircle(std::string moves) {
       if(!(int)moves.size() % 2) return false;
       int pos[2] = {0, 0};
       for(char c : moves){
           switch (c){
               case 'U':
                   pos[1]++;
                   break;
               case 'D':
                   pos[1]--;
                   break;
               case 'R':
                   pos[0]++;
                   break;
               case 'L':
                   pos[0]--;
                   break;
               default:
                   break;
           }
       }
       return !(pos[0] != 0 || pos[1] != 0);
   }
};

int main(){
    Solution so;

    std::cout<<so.judgeCircle("UD");
}