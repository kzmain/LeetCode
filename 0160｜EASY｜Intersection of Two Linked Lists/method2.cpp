#include <iostream>
#include <set>
#include <stack>


//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(!headA || !headB){return nullptr;}
        std::stack<ListNode*> s1;
        std::stack<ListNode*> s2;
        while(headA){s1.push(headA);headA = headA->next;}
        while(headB){s2.push(headB);headB = headB->next;}
        ListNode* res = nullptr;
        while((!s1.empty() && !s2.empty()) && s1.top() == s2.top()){
            res = s1.top();
            s1.pop();
            s2.pop();
        }
        return res;
    }
};

int main(){
    Solution so;

    ListNode ta1 = ListNode(4);
    ListNode ta2 = ListNode(1);

    ListNode tb1 = ListNode(5);
    ListNode tb2 = ListNode(0);
    ListNode tb3 = ListNode(1);

    ListNode tc1 = ListNode(8);
    ListNode tc2 = ListNode(4);
    ListNode tc3 = ListNode(5);

    ListNode* na1 = &ta1;
    ListNode* na2 = &ta2;

    ListNode* nb1 = &tb1;
    ListNode* nb2 = &tb2;
    ListNode* nb3 = &tb3;

    ListNode* nc1 = &tc1;
    ListNode* nc2 = &tc2;
    ListNode* nc3 = &tc3;


    na1->next = na2;
    na2->next = nc1;

    nb1->next = nb2;
    nb2->next = nb3;
    nb3->next = nc1;

    nc1->next = nc2;
    nc2->next = nc3;

    std::cout<<so.getIntersectionNode(na1, nb1)->val<<std::endl;
}