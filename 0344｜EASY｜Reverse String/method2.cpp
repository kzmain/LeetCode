#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <set>

class Solution {
public:
    void reverseString(std::vector<char>& s) {
        char t;
        int size = (int)s.size();
        int mid  = size / 2 + size % 2;
        for(int i = 0; i < mid; i++){
            t = s[i];
            s[i] = s[size - 1 - i];
            s[size - 1 - i] = t;
        }
    }
};

int main(){
    Solution so = Solution();
    auto t1 = std::vector<char>{'h', 'e','l','l','o'};
    auto t2 = std::vector<char>{'A',' ','m','a','n',',',' ','a',' ','p','l','a','n',',',' ','a',' ','c','a','n','a','l',':',' ','P','a','n','a','m','a'};
    so.reverseString(t1);
    so.reverseString(t2);
}