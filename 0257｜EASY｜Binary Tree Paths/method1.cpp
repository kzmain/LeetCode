#include <map>
#include <iostream>
#include <algorithm>
#include <set>
#include <vector>



// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
    std::vector<std::string> res;
public:
    void process(TreeNode* root, std::string str, bool isRoot){
        if(!isRoot) str += "->";
        str += std::to_string(root->val);
        if(root->right == NULL and root->left == NULL) res.push_back(str);
        if(root->right != NULL) process(root->right, str, false);
        if(root->left  != NULL) process(root->left , str, false);
    }

    std::vector<std::string> binaryTreePaths(TreeNode* root) {
        if(root == NULL) return std::vector<std::string>{};
        res = std::vector<std::string>{};
        process(root, "", true);
        return res;
    }
};

int main(){
    auto so = Solution();
    TreeNode R   = TreeNode(1);
    TreeNode Rl  = TreeNode(2);
    TreeNode Rlr = TreeNode(5);
    TreeNode Rr  = TreeNode(3);
    R.left   = &Rl;
    Rl.right = &Rlr;
    R.right  = &Rr;
    auto dd = so.binaryTreePaths(&R);
    for(auto d : dd) std::cout<<d<<std::endl;
}