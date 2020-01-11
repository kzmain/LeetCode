#include <iostream>
#include <vector>
#include <list>

int input = static_cast<int>(121);

//Solution 2
bool isPalindrome(int x) {
    //边界值需要带入检查
    if(x == 0) return true;
    //负值一定不可能是小于0
    else if(x < 0 || x % 10 == 0) return false;

    long compare = x;
    long reverse = 0;
    while(x != 0){
        reverse = (reverse * 10) + (x % 10);
        x /= 10;
    }
    return compare == reverse;
}

int main() {
    auto a = isPalindrome(input);
    return 0;
}
