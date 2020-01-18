#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
#include <cmath>
#include <set>


class Solution {
public:
    bool uniqueOccurrences(std::vector<int>& arr) {
        std::sort(arr.begin(), arr.end());
        int size = (int)arr.size();
        std::set<int> inner;
        for(int i = 0; i < size; i++){
            int count = 1, start = arr[i];
            while(i < size - 1){
                if(start != arr[i + 1]) break;
                count++;
                i++;
            }
            if(!inner.count(count)) inner.insert(count);
            else return false;
        }
        return true;
    }
};

int main(){
    Solution so;
    auto t1 = std::vector<int>{-3,0,1,-3,1,1,1,-3,10,0};
//    auto t1 = std::vector<int>{1, 2};
    std::cout<<so.uniqueOccurrences(t1);
}