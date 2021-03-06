#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>

class Solution {
public:
    int majorityElement(std::vector<int>& nums) {
        if(nums.empty()) throw;
        std::sort(nums.begin(), nums.end());
        return nums[(int)nums.size()/2];
    }
};
int main(){
    Solution so;
    auto t = std::vector<int>{2,2,1,1,1,2,2};
    auto d = std::vector<int>{3,2,3};
    std::cout<<so.majorityElement(d);
//    auto a1 = ListNode(4);
//    auto a2 = ListNode(1);
//    auto a3 = ListNode(8);
//    auto a4 = ListNode(4);
//    auto a5 = ListNode(5);
//
//    auto b1 = ListNode(5);
//    auto b2 = ListNode(0);
//    auto b3 = ListNode(1);
//    auto b4 = ListNode(8);
//    auto b5 = ListNode(4);
//    auto b6 = ListNode(5);
//
//    a1.next = &a2;
//    a2.next = &a3;
//    a3.next = &a4;
//    a4.next = &a5;
//
//    b1.next = &b2;
//    b2.next = &b3;
//    b3.next = &b4;
//    b4.next = &b5;
//    b5.next = &b6;

//    auto a1 = ListNode(0);
//    auto a2 = ListNode(9);
//    auto a3 = ListNode(1);
//    auto a4 = ListNode(2);
//    auto a5 = ListNode(4);
//
//    auto b1 = ListNode(3);
//    auto b2 = ListNode(2);
//    auto b3 = ListNode(4);
//
//    a1.next = &a2;
//    a2.next = &a3;
//    a3.next = &a4;
//    a4.next = &a5;
//
//    b1.next = &b2;
//    b2.next = &b3;
//
//    std::cout<<so.getIntersectionNode(&a1, &b1)->val;
//    return 0;
}