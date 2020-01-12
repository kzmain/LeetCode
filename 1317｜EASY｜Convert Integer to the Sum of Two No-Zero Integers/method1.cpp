#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <cmath>

class Solution {
public:
    bool checker(std::vector<int> nums){
        for(auto num : nums){
            if(num < 1) return false;
            int r , q = num;
            do{
                r = q % 10;
                if(r == 0) return false;
                q = q / 10;
            }while(q != 0);
        }
        return true;
    }

    std::vector<int> getNoZeroIntegers(int n) {
        if(n == 1) throw;
        int a = 0, b = 0, level = 1, start = 1;
        while(a < n){
            a = start;
            level = level * 10;
            start += level;
            for(; a < level; a ++){
                b = n - a;
                if(this->checker({a, b})) return {a, b};
            }
        }
        throw;
    }
};
int main(){
    Solution so;
    for(auto ele: so.getNoZeroIntegers(1010)){
        std::cout<< ele << " ";
    }
}