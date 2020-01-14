#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <set>

//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int add = 0, val = 0, sum = 0;
        ListNode* curr1 = l1; ListNode* curr2 = l2; ListNode* r_end = NULL; ListNode* r = NULL;
        while(curr1 != NULL || curr2 != NULL){
            int val1 = curr1 == NULL ? 0:curr1->val;
            int val2 = curr2 == NULL ? 0:curr2->val;
            sum = val1 + val2 + add;
            val = sum % 10;
            add = sum / 10;
            if(r_end == NULL){r_end = new ListNode(val); r = r_end;}
            else        {r_end->next = new ListNode(val); r_end = r_end->next;}
            if(curr1 != NULL) curr1 = curr1->next;
            if(curr2 != NULL) curr2 = curr2->next;
        }
        if(add != 0) r_end->next = new ListNode(add);
        return r;
    }
};

int main(){
    auto so = Solution();
    auto a1 = ListNode(2);
    auto a2 = ListNode(4);
    auto a3 = ListNode(3);

    auto b1 = ListNode(5);
    auto b2 = ListNode(6);
    auto b3 = ListNode(4);
    auto b4 = ListNode(1);
    a1.next = &a2;
    a2.next = &a3;

    b1.next = &b2;
    b2.next = &b3;
    b3.next = &b4;

//    auto a1 = ListNode(9);
//    auto a2 = ListNode(8);
//
//    auto b1 = ListNode(1);
//    a1.next = &a2;

    ListNode* a = so.addTwoNumbers(&a1, &b1);
    while(a != nullptr){
        std::cout<<a -> val<<std::endl;
        a = a->next;
    }
}