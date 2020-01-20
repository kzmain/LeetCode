#include <iostream>
#include <vector>

class Solution {
public:
   int findSpecialInteger(std::vector<int>& arr) {
       std::map<int, int> inner{};
       int bound = arr.size() / 4;
       for(auto num : arr){
           inner[num] ++;
           if(inner[num] > bound) return num;
       }
       return 0;
   }
};

int main() {
    Solution so;
//    std::vector<int> t1 = std::vector<int>{1,2,2,6,6,6,6,7,10};
    std::vector<int> t1 = std::vector<int>{1,1,2,2,3,3,3,3};
    std::cout<<so.findSpecialInteger(t1);
    return 0;
}
