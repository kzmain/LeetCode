#include <iostream>
#include <vector>

struct ListNode {
    int val;
    ListNode *next;
    explicit ListNode(int x) : val(x), next(nullptr) {}
};


//ListNode* add(ListNode* node, int in_value){     //#构造函数，目的：加入最后一个节点， 类型：ListNode
//    if(node == nullptr){                         //如果为空，new一个新的节点，将end的value存入
//        node = new ListNode(in_value);
//        return node;
//    } else{
//        auto n_node = new ListNode(in_value);    //如不为空，加入到end的next节点
//        node->next = n_node;
//        return node->next;
//    }
//}
//
//ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
//    if(l1 == nullptr) return l2;
//    if(l2 == nullptr) return l1;   //如其中一个为空，则返回另一个list
//    ListNode* l3_start = nullptr;  //初始化时将pointer = nullptr, 不然是野指针，会随便指到内存里，很严重！！
//    ListNode* l3_end   = nullptr;
//
//    ListNode* n1 = l1;
//    ListNode* n2 = l2;  //定义两个指针，分别指到l1,l2开始的地方
//
//    while(n1 != nullptr && n2 != nullptr){   //不为空时执行
//        if(n1->val <=  n2->val) {
//            l3_end = add(l3_end, n1->val);    //调用add， 将当前n1所指节点的value加到l3的end，返回l3_end （返回的都是同类型的）
//            n1 = n1->next;  //指针后移
//        }else{
//            l3_end = add(l3_end, n2->val);
//            n2 = n2->next;
//        }
//        if(l3_start == nullptr) l3_start = l3_end;    //设置起始指针，如为空， end == start
//    }
//    ListNode* r = n1 == nullptr? n2 : n1;    //判断其中一个list是否已遍历完。如n1已完，则把n2剩下的挨个输入l3的end
//    while(r != nullptr){
//        l3_end = add(l3_end, r->val);
//        r = r->next;
//    }
//    return l3_start;    // 返回起始地方，告诉从哪里开始
// }}

ListNode* add(ListNode* node, int in_value){
    if(node == nullptr){
        node = new ListNode(in_value);
        return node;
    }
    else{
        auto n_node = new ListNode(in_value);
        node->next = n_node;
        return node->next;
    }
}

ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    ListNode* n1 = l1;
    ListNode* n2 = l2;
    ListNode* l3_start = nullptr;
    ListNode* l3_end = nullptr;             //初始化时将pointer = nullptr, 不然是野指针，会随便指到内存里，很严重！！

    if(l1 == nullptr) return l2;
    if(l2 == nullptr) return l1;                //如其中一个为空，则返回另一个list
    while(n1 != nullptr && n2 != nullptr){
        if(n1->val <= n2->val) {
            l3_end = add(l3_end, n1->val);
            n1 = n1->next;
        }
        else {
            l3_end = add(l3_end, n2->val);
            n2 = n2->next;
        }
        if(l3_start == nullptr) l3_start = l3_end;
    }
    ListNode* check = n1 == nullptr ? n2 : n1;
    while(check != nullptr){
        l3_end = add(l3_end, check->val);
        check = check->next;
    }
    return l3_start;
}

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
ListNode* list1;
ListNode* list2;

int main() {
//    std::cout << "Hello, World!" << std::endl;
    list1 = insert(list1, 1);
    list1 = insert(list1, 2);
    list1 = insert(list1, 4);
    list1 = insert(list1, 5);
    list2 = insert(list2, 1);
    list2 = insert(list2, 3);
    list2 = insert(list2, 6);
    auto a = mergeTwoLists(list1, list2);
    return 0;
}

