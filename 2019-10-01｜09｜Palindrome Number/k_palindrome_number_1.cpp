#include <iostream>
#include <vector>
#include <list>

int input = static_cast<int>(121);

//Solution 1
bool isPalindrome(int x) {
   //边界值需要带入检查
   if(x == 0) return true;
   //负值一定不可能是小于0
   if(x < 0 || x % 10 == 0) return false;

   std::list<int> left = {};
   std::list<int> right = {};
   while(x != 0){
       left.push_back(x % 10);
       x /= 10;
   }
   right = left;
   right.reverse();

   unsigned long middle = 0;
   int reminder = x % 2;
   if(reminder == 0)middle = left.size()/2;
   else middle = left.size()/2 + 1;

   for(int i =0; i < middle; i++){
       if(left.back() != right.back()) return false;
       else {left.pop_back(); right.pop_back();}
   }
   return true;
}

int main() {
    auto a = isPalindrome(input);
    return 0;
}
