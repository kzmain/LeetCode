#include <map>
#include <iostream>
#include <algorithm>
#include <set>
#include <vector>

class Solution {
public:
    std::vector<int> intersection(std::vector<int>& nums1, std::vector<int>& nums2) {
        std::set<int> n1s, res;
        for(auto ns1 : nums1) n1s.insert(ns1);
        for(auto ns2 : nums2){if(n1s.count(ns2)){res.insert(ns2);}}
        std::vector<int> v;
        v.reserve(res.size());
        for(auto re : res) v.push_back(re);
        return v;
    }
};

int main(){
    auto so = Solution();
    std::vector<int> t1 = std::vector<int>{4,9,5};
    std::vector<int> t2 = std::vector<int>{9,4,9,8,4};
    auto ds = so.intersection(t1, t2);
    for(auto d : ds){
        std::cout<<d<<std::endl;
    }
}