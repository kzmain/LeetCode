#include <map>
#include <iostream>
#include <algorithm>
#include <set>
#include <vector>

class Solution {
public:
   std::vector<int> intersection(std::vector<int>& nums1, std::vector<int>& nums2) {
       std::sort(nums1.begin(), nums1.end());
       std::sort(nums2.begin(), nums2.end());
       std::vector<int> re;
       for(auto n1 : nums1){
           int loc = 0;
           for(; loc < (int)nums2.size(); loc++){
               if(nums2[loc] > n1) break;
               else if(nums2[loc] == n1){
                   if((int)re.size()==0 or re.back() != n1)re.push_back(n1);
               }
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