#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    void duplicateZeros(std::vector<int>& arr) {
        int iSize = arr.size(), zSize = 0;
        for(int i = 0; i < iSize; i++) if(!arr[i]) zSize++;
        if(zSize == iSize || zSize == 0) return;

        for(int endLoc = iSize - 1; zSize; endLoc--){
            if(endLoc + zSize < iSize) arr[endLoc + zSize] = arr[endLoc];
            if(!arr[endLoc]) if(endLoc + --zSize < iSize) arr[endLoc + zSize] = arr[endLoc];
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