#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
#include <cmath>


//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    int getDecimalValue(ListNode* head) {
        std::stack<int> inner;
        int index = 0, sum = 0;
        while(head != nullptr){inner.push(head->val);head = head->next;}
        while(!inner.empty()){
            sum += (int)std::pow(2, index) * inner.top();
            index++;
            inner.pop();
        }
        return sum;
    }
};

int main(){
    Solution so;
    ListNode t1  = ListNode(1);
    ListNode t2  = ListNode(0);
    ListNode t3  = ListNode(0);
    ListNode t4  = ListNode(1);
    ListNode t5  = ListNode(0);
    ListNode t6  = ListNode(0);
    ListNode t7  = ListNode(1);
    ListNode t8  = ListNode(1);
    ListNode t9  = ListNode(1);
    ListNode t10 = ListNode(0);
    ListNode t11 = ListNode(0);
    ListNode t12 = ListNode(0);
    ListNode t13 = ListNode(0);
    ListNode t14 = ListNode(0);
    ListNode t15 = ListNode(0);

    ListNode* n1  = &t1 ;
    ListNode* n2  = &t2 ;
    ListNode* n3  = &t3 ;
    ListNode* n4  = &t4 ;
    ListNode* n5  = &t5 ;
    ListNode* n6  = &t6 ;
    ListNode* n7  = &t7 ;
    ListNode* n8  = &t8 ;
    ListNode* n9  = &t9 ;
    ListNode* n10 = &t10;
    ListNode* n11 = &t11;
    ListNode* n12 = &t12;
    ListNode* n13 = &t13;
    ListNode* n14 = &t14;
    ListNode* n15 = &t15;

    n1 ->next = n2 ;
    n2 ->next = n3 ;
    n3 ->next = n4 ;
    n4 ->next = n5 ;
    n5 ->next = n6 ;
    n6 ->next = n7 ;
    n7 ->next = n8 ;
    n8 ->next = n9 ;
    n9 ->next = n10;
    n10->next = n11;
    n11->next = n12;
    n12->next = n13;
    n13->next = n14;
    n14->next = n15;
    std::cout<<so.getDecimalValue(n1);
}