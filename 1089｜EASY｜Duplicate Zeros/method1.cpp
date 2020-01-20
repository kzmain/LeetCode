#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
   void duplicateZeros(std::vector<int>& arr) {
       int aSize = arr.size();
       for(int loc = 0; loc < aSize; loc++){
           if(!arr[loc]){
               for(int rep = aSize - 1; loc < rep && rep > 0; rep--) arr[rep] = arr[rep - 1];
               if(loc + 1 < aSize) arr[loc + 1] = 0;
               loc++;
           }
       }
   }
};

int main(){
    Solution so;
//    auto t1 = std::vector<int>{1,0,2,3,0,4,5};
//    auto t1 = std::vector<int>{1,0};
//    auto t1 = std::vector<int>{0,0};
//    auto t1 = std::vector<int>{0,0,0,0,0,0,0};
//    auto t1 = std::vector<int>{1, 0, 0, 2, 3, 0, 4, 5};
auto t1 = std::vector<int>{0,1,7,6,0,2,0,7};
    so.duplicateZeros(t1);
}