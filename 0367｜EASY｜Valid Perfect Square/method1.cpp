#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <cmath>

class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num < 0) return false;
        if(num == 1) return true;
        int max_limit = 46340;
        int s = num, b, pow;
        do{
            b = s < max_limit + 1 ? s : max_limit + 1;
            s = s/2 < max_limit ? s/2 : max_limit;
            pow = s * s;
        }while (pow > num);

        for(; s < b; s++){
            pow = s * s;
            if(pow == num) return true;
            if(pow > num) return false;
        }
        return false;
    }
};

int main(){
    Solution so;
    std::cout<< so.isPerfectSquare(1) << " ";
}