#include <iostream>
#include <vector>
#include <set>

class Solution {
public:
    int thirdMax(std::vector<int>& nums) {
        std::set<int> inner;
        for(auto num : nums) inner.insert(num);
        auto res = inner.end();
        if((int)inner.size() < 3) return *--res;
        for(int i = 0; i < 3; i++){res--;}
        return *res;
    }
};

int main(){
    Solution so;
//    auto t1 = std::vector<int>{3, 1, 2, 4};
//    auto t1 = std::vector<int>{};
//    auto t1 = std::vector<int>{3, 1, 2, 4, 5};
//    auto t1 = std::vector<int>{4, 6};
    auto t1 = std::vector<int>{1, 3};
//    auto t1 = std::vector<int>{3, 1, 2, 4, 6};
    std::cout<<so.thirdMax(t1)<<" ";
    std::cout<<std::endl;
}
