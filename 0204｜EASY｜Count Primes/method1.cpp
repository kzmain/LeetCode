#include <iostream>
#include <vector>
#include <set>
#include <queue>
#include <algorithm>
#include <unordered_set>
#include <cmath>

class Solution {
public:
    int countPrimes(int n) {
        int result = 0;
        for(int prime = 2; prime < n; prime++){
            bool isPrime = true;
            for(int checker = 2; checker <= std::sqrt(prime); checker++){
                if(prime % checker == 0){
                    isPrime = false;
                    break;
                }
            }
            if(isPrime) result++;
        }
        return result;
    }
};
//1073741823
int main(){
    Solution so;
    std::cout<<so.countPrimes(99);
}