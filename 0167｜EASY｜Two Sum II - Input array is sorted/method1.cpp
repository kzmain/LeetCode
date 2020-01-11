#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>


class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& numbers, int target) {
        if(numbers.empty()) return std::vector<int>{};
        int s = 0, b = (int)numbers.size() -1, sum = 0;
        do{
            sum = numbers[s] + numbers[b];
            if(sum > target){ b--;}
            else if (sum < target){ s++; }
            else if(sum == target){return std::vector<int>{s + 1, b + 1};}
        }while(s != b);
        return std::vector<int>{};
    }
};

int main(){
    Solution so;
    std::vector<int> in = std::vector<int>{-1,0};
    for(auto o : so.twoSum(in, -1)){
        std::cout<<o<<" ";
    }
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