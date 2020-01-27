#include <iostream>
#include <algorithm>
#include <stack>

class Solution {
public:
   int fib(int N) {
       if(N < 2) return N;
       else return fib(N - 1) + fib(N - 2);
   }
};

int main() {
    Solution so;
    std::cout << "Result should be: 0     . Result: "<< so.fib(0 ) << std::endl;
    std::cout << "Result should be: 1     . Result: "<< so.fib(1 ) << std::endl;
    std::cout << "Result should be: 1     . Result: "<< so.fib(2 ) << std::endl;
    std::cout << "Result should be: 2     . Result: "<< so.fib(3 ) << std::endl;
    std::cout << "Result should be: 3     . Result: "<< so.fib(4 ) << std::endl;
    std::cout << "Result should be: 5     . Result: "<< so.fib(5 ) << std::endl;
    std::cout << "Result should be: 8     . Result: "<< so.fib(6 ) << std::endl;
    std::cout << "Result should be: 13    . Result: "<< so.fib(7 ) << std::endl;
    std::cout << "Result should be: 21    . Result: "<< so.fib(8 ) << std::endl;
    std::cout << "Result should be: 34    . Result: "<< so.fib(9 ) << std::endl;
    std::cout << "Result should be: 55    . Result: "<< so.fib(10) << std::endl;
    std::cout << "Result should be: 89    . Result: "<< so.fib(11) << std::endl;
    std::cout << "Result should be: 144   . Result: "<< so.fib(12) << std::endl;
    std::cout << "Result should be: 233   . Result: "<< so.fib(13) << std::endl;
    std::cout << "Result should be: 377   . Result: "<< so.fib(14) << std::endl;
    std::cout << "Result should be: 610   . Result: "<< so.fib(15) << std::endl;
    std::cout << "Result should be: 987   . Result: "<< so.fib(16) << std::endl;
    std::cout << "Result should be: 1597  . Result: "<< so.fib(17) << std::endl;
    std::cout << "Result should be: 2584  . Result: "<< so.fib(18) << std::endl;
    std::cout << "Result should be: 4181  . Result: "<< so.fib(19) << std::endl;
    std::cout << "Result should be: 6765  . Result: "<< so.fib(20) << std::endl;
    std::cout << "Result should be: 10946 . Result: "<< so.fib(21) << std::endl;
    std::cout << "Result should be: 17711 . Result: "<< so.fib(22) << std::endl;
    std::cout << "Result should be: 28657 . Result: "<< so.fib(23) << std::endl;
    std::cout << "Result should be: 46368 . Result: "<< so.fib(24) << std::endl;
    std::cout << "Result should be: 75025 . Result: "<< so.fib(25) << std::endl;
    std::cout << "Result should be: 121393. Result: "<< so.fib(26) << std::endl;
    std::cout << "Result should be: 196418. Result: "<< so.fib(27) << std::endl;
    std::cout << "Result should be: 317811. Result: "<< so.fib(28) << std::endl;
    std::cout << "Result should be: 514229. Result: "<< so.fib(29) << std::endl;
    std::cout << "Result should be: 832040. Result: "<< so.fib(30) << std::endl;
    return 0;
}
