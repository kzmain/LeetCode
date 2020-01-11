#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>

class Solution {
public:
    std::string convertToTitle(int n) {
        std::string res;
        int q = n, r;
        while(q != 0){
            r = q % 26;
            q = q / 26;
            if(r == 0) {r = 26; q--;}
            res = static_cast<char>(65 + r -1) + res;
        }
        return res;
    }
};
int main(){
    Solution so;
    std::cout<<so.convertToTitle(28);
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