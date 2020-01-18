#include <iostream>

class Solution {
public:
    int subtractProductAndSum(int n) {
        int pro = 1, sum = 0;
        while(n != 0){
            int r = n % 10;
            pro *= r;
            sum += r;
            n    /= 10;
        }
        return pro - sum;
    }
};

int main(){
    Solution so;
    std::cout<<so.subtractProductAndSum(1)<<std::endl;
}