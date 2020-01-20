#include <iostream>
#include <vector>

class Solution {
public:
    bool count(std::vector<int>& arr, int pos, int bound){
        int count = 1, si = arr.size();
        if(si > 7){if(arr[pos - 1] != arr[pos] || arr[pos + 1] != arr[pos]) return false;}
        for(int i = pos; i > 0      && arr[i - 1] == arr[i]; i--)count++;
        for(int i = pos; i < si - 1 && arr[i + 1] == arr[i]; i++)count++;
        return count > bound;
    }

    int findSpecialInteger(std::vector<int>& arr) {
        int size = arr.size();
        if(size <= 4) return arr[size - 1];
        int bud = size / 4;
        int mid = size / 2 + size % 2;
        if(count(arr, mid - 1, bud)) return arr[mid - 1];
        if(count(arr, size - bud - 1, bud)) return arr[size - bud - 1];
        if(count(arr, bud - 1, bud)) return arr[bud - 1];
        return 0;
    }
};

int main() {
    Solution so;
//    std::vector<int> t1 = std::vector<int>{1,2,2,6,6,6,6,7,10};
    std::vector<int> t1 = std::vector<int>{1,1,2,2,3,3,3,3};
    std::cout<<so.findSpecialInteger(t1);
    return 0;
}
