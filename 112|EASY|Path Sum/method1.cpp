#include <vector>
#include <iostream>
#include <algorithm>


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};



class Solution {
private:
public:
    int sum;
    bool sum_node_leaf(TreeNode *root, int c_sum) {
        if(root == NULL) return false;
        c_sum += root->val;
        if(c_sum == this->sum and root->right == NULL and root->left == NULL) return true;
        return std::max(sum_node_leaf(root->left, c_sum), sum_node_leaf(root->right, c_sum));
    }

    bool hasPathSum(TreeNode* root, int sum) {
        this->sum = sum;
        int c_sum = 0;
        return sum_node_leaf(root, c_sum);
    }
};

int main(){
    Solution so = Solution();
    TreeNode n1_tree = (TreeNode(1));

    auto n1_left = (TreeNode(-2));
    n1_tree.left = &n1_left;

    auto n1_left_right = (TreeNode(3));
    n1_tree.left->right = &n1_left_right;

    auto n1_left_left = (TreeNode(1));
    n1_tree.left->left = &n1_left_left;

    auto n1_left_left_left = (TreeNode(-1));
    n1_tree.left->left->left = &n1_left_left_left;

    auto n1_right = (TreeNode(-3));
    n1_tree.right = &n1_right;

    auto n1_right_left = (TreeNode(-2));
    n1_tree.right->left = &n1_right_left;
    std::cout<<so.hasPathSum(&n1_tree, -1)<<std::endl;
}