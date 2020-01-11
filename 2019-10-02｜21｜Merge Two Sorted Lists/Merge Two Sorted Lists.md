# Merge Two Sorted Lists intro:
Merge two sorted linked lists and return it as a new list. The new list should be made by splicing together the nodes of the first two lists.

Example:
```
Input: 1->2->4, 1->3->4
Output: 1->1->2->3->4->4
```

##Note:
1. k_merge_two_sorted_lists.cpp
	有意思的地方：建立单向list，且有insert() function.
	新node建立方法为 Node* name = new Node;

# Appendix
https://leetcode.com/problems/merge-two-sorted-lists/ 