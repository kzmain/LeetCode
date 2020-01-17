#include <iostream>
#include <vector>
#include <set>


//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
   ListNode* deleteDuplicates(ListNode* head) {
       ListNode* curr = head;
       if(!curr) return head;
       while(curr){
           while(curr->next && curr->val == curr->next->val) curr->next = curr->next->next;
           curr = curr->next;
       }
       return head;
   }
};

int main(){
    Solution so;
    ListNode t1 = ListNode(1);
    ListNode t2 = ListNode(1);
    ListNode t3 = ListNode(2);
    ListNode t4 = ListNode(3);
    ListNode t5 = ListNode(3);

    ListNode* n1 = &t1;
    ListNode* n2 = &t2;
    ListNode* n3 = &t3;
    ListNode* n4 = &t4;
    ListNode* n5 = &t5;

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;

    n1 = so.deleteDuplicates(n1);
    while(n1 != nullptr){
        std::cout<<n1->val<<" ";
        n1 = n1->next;
    }
    std::cout<<std::endl;
}