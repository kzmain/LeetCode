#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

class Solution {
public:
    std::vector<int> relativeSortArray(std::vector<int>& arr1, std::vector<int>& arr2) {
        if(arr2.empty()){std::sort(arr1.begin(), arr1.end()); return arr1;}
        if(arr1.empty()){return arr1;}

        std::map<int, int> mp = std::map<int, int>{};
        std::vector<int> re;
        for(auto num : arr1) mp[num]++;
        for(auto num : arr2) {
            for (int i = 0; i < mp[num]; i++) re.push_back(num);
            mp.erase(num);
        }
        for(auto it : mp) for(int i = 0; i < it.second; i++) re.push_back(it.first);
        return re;
    }
};

int main() {
    Solution so;
    std::vector<int> arr1 = {2,3,1,3,2,4,6,7,9,2,19};
    std::vector<int> arr2 = {2,1,4,3,9,6};
    for(auto a : so.relativeSortArray(arr1, arr2))
        std::cout<<a<<" ";
    return 0;
}
