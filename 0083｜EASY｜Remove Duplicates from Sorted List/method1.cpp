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
        if(!head) return head;
        ListNode* curr = head;
        std::set<int> inner{curr->val};
        while(curr->next){
            if(!inner.count(curr->next->val)){
                inner.insert(curr->next->val);
                curr = curr->next;
            }
            else{
                curr->next = curr->next->next;
            }
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