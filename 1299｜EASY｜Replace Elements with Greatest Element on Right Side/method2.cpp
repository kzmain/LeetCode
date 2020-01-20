#include <iostream>
#include <set>
#include <vector>

class Solution {
public:
    std::vector<int> replaceElements(std::vector<int>& arr) {
        int s = arr.size();arr.push_back(-1);
        for(; s - 1; s--) if(arr[s - 1] < arr[s]) arr[s - 1] = arr[s];
        return std::vector(++arr.begin(), arr.end());
    }
};

int main(){
    Solution so;
    std::vector<int> t1 = std::vector<int>{17,18,5,4,6,1};
//    std::vector<int> t1 = std::vector<int>{};
    auto a = so.replaceElements(t1);
    return  0;
}