// Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };


class Solution {
    std::unordered_set<ListNode*> un_set = std::unordered_set<ListNode*>{};
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL) return false;
        if(head->next == NULL) return false;
        if(this->un_set.find(head) != this->un_set.end()) return true;
        this->un_set.insert(head);
        return hasCycle(head->next);
    }
};


int main(){
    Solution so = Solution();
    std::unordered_set <std::string> stringSet ;
    auto node_1 = ListNode(3);
    auto node_2 = ListNode(2);
    auto node_3 = ListNode(0);
    auto node_4 = ListNode(-4);
    node_1.next = &node_2;
    node_2.next = &node_3;
    node_3.next = &node_4;
    node_4.next = &node_2;
    std::cout<<so.hasCycle(&node_1);
}