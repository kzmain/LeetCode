#include <iostream>
#include <vector>
#include <set>


class Solution {
public:
    std::vector<int> selfDividingNumbers(int left, int right) {
        auto res = std::vector<int>{};
        int n, r;
        for(; left < right + 1; left ++){
            n = left;
            while(n){
                r = n % 10;
                if(r == 0 or left % r) break;
                n /= 10;
            }
            if(!n) res.push_back(left);
        }
        return res;
    }
};


int main(){
    Solution so;
    for(auto num : so.selfDividingNumbers(1, 22)) std::cout<<num<<" ";
}