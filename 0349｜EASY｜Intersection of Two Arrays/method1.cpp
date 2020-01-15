#include <map>
#include <iostream>
#include <algorithm>
#include <set>
#include <vector>

class Solution {
public:
   std::vector<int> intersection(std::vector<int>& nums1, std::vector<int>& nums2) {
       std::set<int> n1s, n2s;
       std::vector<int> re;
       for(auto ns1 : nums1) n1s.insert(ns1);
       for(auto ns2 : nums2) n2s.insert(ns2);
       for(auto c1 = n1s.begin(); c1 != n1s.end(); c1++){
           auto c2 = n2s.begin();
           for(; c2 != n2s.end(); c2++){
               if(*c2 > *c1) break;
               else if(*c2 == *c1) re.push_back(*c1);
           }
       }
       return re;
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