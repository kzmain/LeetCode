#include <iostream>
#include <vector>
#include <set>
#include <queue>
#include <algorithm>
#include <unordered_set>
#include <cmath>



//Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
    void switchNode(TreeNode* root){
        if(root == nullptr) return;
        if(root->right == nullptr && root->left == nullptr) return;
        TreeNode* temp = root->left;
        root->left = root->right;
        root->right = temp;
        switchNode(root->right);
        switchNode(root->left);
    }
public:

    TreeNode* invertTree(TreeNode* root) {
        switchNode(root);
        return root;
    }
};

int main(){
    auto t01 = TreeNode(4);
    auto t11 = TreeNode(2);
    auto t12 = TreeNode(7);
    auto t21 = TreeNode(1);
    auto t22 = TreeNode(3);
    auto t23 = TreeNode(6);
    auto t24 = TreeNode(9);

    auto l01 = &t01;
    auto l11 = &t11;
    auto l12 = &t12;
    auto l21 = &t21;
    auto l22 = &t22;
    auto l23 = &t23;
    auto l24 = &t24;
    l01->left  = l11;
    l01->right = l12;
    l11->left  = l21;
    l11->right = l22;
    l12->left  = l23;
    l12->right = l24;

    Solution so;
    l01 = so.invertTree(l01);
    while(l01 != nullptr){
        std::cout<<l01->val<<" ";
        l01 = l01->left;
    }
    std::cout<<std::endl;
}