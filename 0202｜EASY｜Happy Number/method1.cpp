#include <map>
#include <iostream>
#include <algorithm>

class Solution {
public:
    bool isHappy(int n) {
        int sum = 0;
        while(n != 0){
            sum += (n % 10) * (n % 10);
            n = n / 10;
        }
        if(sum == 1 or sum == 7 or sum == 70 or sum == 49 or sum == 94 or sum == 97 or sum == 79 or
        sum == 130 or sum == 13 or sum == 10 or sum == 82 or sum == 68){
            return true;
        }
        if(sum == 2 or sum==3 or sum == 4 or sum == 5 or sum == 6 or sum == 8 or sum == 9 or sum == 16
        or sum == 64 or sum == 52 or sum == 29 or sum == 85 or sum == 89 or sum == 145 or sum == 42 or sum == 20){
            return false;
        }

        std::cout<<"Test: "<<sum<<std::endl;
        if(sum == 1) return true;
        else if(sum < 10)return isHappy(sum * 10);
        else return isHappy(sum);
    }
};

int main(){
    auto so = Solution();
    std::cout<<so.isHappy(7)<<std::endl;
//    std::cout<<so.isHappy(19)<<std::endl;
    return 0;
}