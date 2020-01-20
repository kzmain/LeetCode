#include <iostream>
#include <set>
#include <vector>

class Solution {
public:
   std::vector<int> replaceElements(std::vector<int>& arr) {
       int re = -1, tp;
       for(int i = (int)arr.size() - 1; i > -1; i--){
           tp = arr[i];
           arr[i] = re;
           if(re < tp) re = tp;
       }
       return arr;
   }
};

int main(){
    Solution so;
    std::vector<int> t1 = std::vector<int>{17,18,5,4,6,1};
//    std::vector<int> t1 = std::vector<int>{};
    auto a = so.replaceElements(t1);
    return  0;
}