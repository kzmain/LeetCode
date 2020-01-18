#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<int> sortArrayByParity(std::vector<int>& A) {
        int size = (int)A.size();
        if(size == 0 || size == 1) return A;
        int first = 0, last = size - 1;
        while(first < last){
            while(first < size && !(A[first] % 2)) first++;
            while(last  > -1   &&  (A[last ] % 2)) last --;
            if(first >= last) break;
            int temp = A[first];
            A[first] = A[last];
            A[last] = temp;
        }
        return A;
    }
};

int main(){
    Solution so;
//    auto t1 = std::vector<int>{3, 1, 2, 4};
//    auto t1 = std::vector<int>{};
//    auto t1 = std::vector<int>{3, 1, 2, 4, 5};
//    auto t1 = std::vector<int>{3, 1, 2, 4, 6};
//    auto t1 = std::vector<int>{4, 6};
//    auto t1 = std::vector<int>{1, 3};
    auto t1 = std::vector<int>{0,2,1,4};
    for(auto e : so.sortArrayByParity(t1)) std::cout<<e<<" ";
    std::cout<<std::endl;
}