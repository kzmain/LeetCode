#include <iostream>
#include <vector>
#include <list>
int mySqrt(int x) {
    int result    = (x/2) + 1 > 46340 ? 46340 : (x/2) + 1;
    long longx = x;
    for(; 0 < result; result--){
        long compare = result * result;
        if(compare <= longx){return result;}
    }
    return result;
}

int main() {
    auto a = mySqrt(2147395599);
    return 0;
}
