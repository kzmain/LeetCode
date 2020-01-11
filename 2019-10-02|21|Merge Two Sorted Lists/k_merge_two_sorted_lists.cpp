#include <iostream>
#include <vector>
#include <list>


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* list1;
ListNode* list2;


ListNode* insert(ListNode* list, int value){
    ListNode* element = new ListNode(value);
    if(list == nullptr){
        list = element;
    }else{
        ListNode* node = list;
        while (node->next != nullptr){
            node = node->next;
        }
        node->next = element;
    }
    return list;
}

ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    ListNode* n1 = l1;
    ListNode* n2 = l2;
    ListNode *l3 = nullptr;
    while (n1 != nullptr && n2 != nullptr){
        if(n1->val <= n2->val){
            l3 = insert(l3, n1->val);
            n1 = n1->next;
        }
        else{
            l3 = insert(l3, n2->val);
            n2 = n2->next;
        }
    }
    ListNode* checker = n1 == nullptr? n2 : n1;
    while (checker != nullptr){
        l3 = insert(l3, checker->val);
        checker = checker->next;
    }
    return l3;
}



int main() {
    list1 = insert(list1, 1);
    list1 = insert(list1, 2);
    list1 = insert(list1, 4);
    list1 = insert(list1, 5);
    list2 = insert(list2, 1);
    list2 = insert(list2, 3);
    list2 = insert(list2, 6);
    mergeTwoLists(list1, list2);
    return 0;
}
