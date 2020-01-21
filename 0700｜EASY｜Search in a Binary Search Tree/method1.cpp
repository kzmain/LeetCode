#include <iostream>
#include <vector>
#include <set>


//Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if(!root || root->val == val) return root;
        if(root->val > val) return searchBST(root->left, val);
        else                return searchBST(root->right,  val);
    }
};


int main(){
    Solution so;

    TreeNode t01 = TreeNode(4);
    TreeNode t11 = TreeNode(2);
    TreeNode t12 = TreeNode(7);
    TreeNode t21 = TreeNode(1);
    TreeNode t22 = TreeNode(3);

    TreeNode* n01 = &t01;
    TreeNode* n11 = &t11;
    TreeNode* n12 = &t12;
    TreeNode* n21 = &t21;
    TreeNode* n22 = &t22;

    n01->left   = n11;
    n01->right = n12;
    n11->left  = n21;
    n11->right = n22;
    auto r = so.searchBST(n01, 100);
    if(r) std::cout<<r->val<<" ";
    else   std::cout<<"nullptr"<<" ";
}