#include <iostream>
#include <vector>
#include <set>
#include <queue>
#include <algorithm>
#include <unordered_set>
#include <cmath>


//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {

public:
   ListNode* reverseList(ListNode* head) {
       if(head == nullptr) return nullptr;
       std::vector<ListNode*> inner;
       while(head != nullptr){
           auto in = head;
           head = head->next;
           in->next = nullptr;
           inner.push_back(in);
       }
       for(int i = (int)inner.size() - 1; i > 0; i --){
           inner[i]->next = inner[i - 1];
       }
       return inner[inner.size() - 1];
   }
};

int main(){
    auto t1 = ListNode(1);
    auto t2 = ListNode(2);
    auto t3 = ListNode(3);
    auto t4 = ListNode(4);
    auto t5 = ListNode(5);

    ListNode* n1 = &t1;
    ListNode* n2 = &t2;
    ListNode* n3 = &t3;
    ListNode* n4 = &t4;
    ListNode* n5 = &t5;

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;

    Solution so;
    n1 = so.reverseList(n1);
    while(n1 != nullptr){
        std::cout<<n1->val<<" ";
        n1 = n1->next;
    }
    std::cout<<std::endl;
}