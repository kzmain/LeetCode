#include <vector>
#include <iostream>
#include <algorithm>

class Solution {
public:
    int addDigits(int num) {
        if(num < 10) return num;
        int sum = 0;

        while(num != 0){
            sum += num % 10;
            num  = num / 10;
        }

        if(     sum == 1 or sum == 10 or sum == 19 or sum == 28 or sum == 37 or sum == 46 or sum == 55 or sum == 64 or sum == 73 or sum == 82 or sum == 91)
        {
            return 1;
        }
        else if(sum == 2 or sum == 11 or sum == 20 or sum == 29 or sum == 38 or sum == 47 or sum == 56 or sum == 65 or sum == 74 or sum == 83 or sum == 92)
        {
            return 2;
        }
        else if(sum == 3 or sum == 12 or sum == 21 or sum == 30 or sum == 39 or sum == 48 or sum == 57 or sum == 66 or sum == 75 or sum == 84 or sum == 93)
        {
            return 3;
        }
        else if(sum == 4 or sum == 13 or sum == 22 or sum == 31 or sum == 40 or sum == 49 or sum == 58 or sum == 67 or sum == 76 or sum == 85 or sum == 94)
        {
            return 4;
        }
        else if(sum == 5 or sum == 14 or sum == 23 or sum == 32 or sum == 41 or sum == 50 or sum == 59 or sum == 68 or sum == 77 or sum == 86 or sum == 95)
        {
            return 5;
        }
        else if(sum == 6 or sum == 15 or sum == 24 or sum == 33 or sum == 42 or sum == 51 or sum == 60 or sum == 69 or sum == 78 or sum == 87 or sum == 96)
        {
            return 6;
        }
        else if(sum == 7 or sum == 16 or sum == 25 or sum == 34 or sum == 43 or sum == 52 or sum == 61 or sum == 70 or sum == 79 or sum == 88 or sum == 97)
        {
            return 7;
        }
        else if(sum == 8 or sum == 17 or sum == 26 or sum == 35 or sum == 44 or sum == 53 or sum == 62 or sum == 71 or sum == 80 or sum == 89 or sum == 98)
        {
            return 8;
        }
        else if(sum == 9 or sum == 18 or sum == 27 or sum == 36 or sum == 45 or sum == 54 or sum == 63 or sum == 72 or sum == 81 or sum == 90 or sum == 99)
        {
            return 9;
        }
        return 0;
    }
};

int main(){
    auto so = Solution();
    std::cout<<so.addDigits(10)<<std::endl;
//    std::cout<<so.addDigits(38)<<std::endl;
//    std::cout<<so.addDigits(6)<<std::endl;
    return 0;
}