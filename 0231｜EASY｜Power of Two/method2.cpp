#include <map>
#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
#include <stack>

class Solution {
public:
    bool isPowerOfTwo(int n) {
        return (
                n == 1073741824 || n == 536870912 || n == 268435456 || n == 134217728 || n == 67108864  ||
                n == 33554432   || n == 16777216  || n == 8388608   || n == 4194304   || n == 2097152   ||
                n == 1048576    || n == 524288    || n == 262144    || n == 131072    || n == 65536     ||
                n == 32768      || n == 16384     || n == 8192      || n == 4096      || n == 2048      ||
                n == 1024       || n == 512       || n == 256       || n == 128       || n == 64        ||
                n == 32         || n == 16        || n == 8         || n == 4         || n == 2         ||
                n == 1
        );
    }
};




int main(){
    Solution so = Solution();
    std::cout<<so.isPowerOfTwo(1)<<std::endl;
    std::cout<<so.isPowerOfTwo(16)<<std::endl;
    std::cout<<so.isPowerOfTwo(5)<<std::endl;
    std::cout<<so.isPowerOfTwo(218)<<std::endl;
}