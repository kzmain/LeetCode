#include <list>
#include <iostream>
#include <algorithm>


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == NULL) return 0;
        return 1 + std::max(maxDepth(root->right), maxDepth(root->left));
    }
};

int main(){
    Solution so = Solution();
    TreeNode n1_tree = (TreeNode(1));
    auto n1_left = (TreeNode(2));
    n1_tree.left = &n1_left;
    auto n1_right = (TreeNode(2));
    n1_tree.right = &n1_right;
    auto n1_right_left = (TreeNode(3));
    n1_tree.right->left = &n1_right_left;
    std::cout<<so.maxDepth(&n1_tree)<<std::endl;
}