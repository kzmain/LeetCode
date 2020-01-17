#include <iostream>
#include <vector>
#include <set>

//@TODO 可能会溢出 超过13以后
//class Solution {
//public:
//    int trailingZeroes(int n) {
//        int mid = 1, count = 0;
//        for(int i = 1; i <= n; i++) mid *= i;
//        while(mid != 0){if(mid % 10 == 0) count++; else break; mid /= 10;}
//        return count;
//    }
//};


//@TODO 太慢
//class Solution {
//public:
//    int count5(int n){
//        int count = 0;
//        while(n != 0){if(n % 5 == 0){count++; n /= 5;}else{break;}}
//        return count;
//    }
//
//    int trailingZeroes(int n) {
//        int num5 = 0, last;
//        for(int i = 1; i <= n; i++){
//            last = i % 10;
//            if(last == 5 or last == 0) num5 += count5(i);
//        }
//        return num5;
//    }
//};

class Solution {
public:
    int trailingZeroes(int n) {
        int count = 0;
        while(n){n /= 5;count += n;}
        return count;
    }
};


int main(){
    Solution so;
    std::cout<<so.trailingZeroes(125)<<std::endl;
}