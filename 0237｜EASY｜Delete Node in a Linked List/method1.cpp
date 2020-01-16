#include <map>
#include <iostream>
#include <algorithm>
#include <set>
#include <vector>


// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};




class Solution {
public:
    void deleteNode(ListNode* node) {
        if (node == nullptr) return;
        ListNode* next = node->next;
        node->val = next->val;
        node->next = next->next;
//        delete next;
    }
};

int main(){
    ListNode t1 = ListNode(4);
    ListNode t2 = ListNode(5);
    ListNode t3 = ListNode(1);
    ListNode t4 = ListNode(9);

    ListNode* n1 = &t1;
    ListNode* n2 = &t2;
    ListNode* n3 = &t3;
    ListNode* n4 = &t4;

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;


    auto so = Solution();
    so.deleteNode(n3);
    while(n1 != NULL) {std::cout<<n1->val<<" "; n1 = n1->next;}
}