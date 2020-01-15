#include <map>
#include <iostream>
#include <algorithm>


// * Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(head == NULL) return NULL;
        ListNode* prev = NULL;
        ListNode* curr = head;
        while(curr != NULL){
            if(curr->val == val){
                if(prev == NULL){
                    head = head->next;
                    curr = head;
                }
                else{
                    prev->next = curr->next;
                    curr = curr->next;
                }
            }else{
                prev = curr;
                curr = curr->next;
            }

        }
        return head;
    }
};

int main(){
    auto so = Solution();
    ListNode n1 = ListNode(1);
    ListNode n2 = ListNode(2);
    ListNode n3 = ListNode(2);
    ListNode n4 = ListNode(1);
//    ListNode n5 = ListNode(4);
//    ListNode n6 = ListNode(5);
//    ListNode n7 = ListNode(6);
//
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
//    n4.next = &n5;
//    n5.next = &n6;
//    n6.next = &n7;

    auto t = so.removeElements(&n1, 2);
    while(t != NULL){
        std::cout<<t->val;
        t = t->next;
    }

}