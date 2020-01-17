#include <iostream>
#include <vector>

//Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
   std::vector<TreeNode*> getPath(TreeNode* root, TreeNode* node, std::vector<TreeNode*> vec){
       vec.push_back(root);
       if(root == node)    return vec;
       else if(root == nullptr) return std::vector<TreeNode*>{};

       auto left  = getPath(root->left,  node, vec);
       auto right = getPath(root->right, node, vec);
       return left.size() > right.size() ? left : right;
   }

   TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
       if(root == nullptr) return nullptr;
       auto pVec = getPath(root, p, std::vector<TreeNode*>{});
       auto qVec = getPath(root, q, std::vector<TreeNode*>{});
       int  len  = pVec.size() < qVec.size() ? pVec.size() : qVec.size();
       int  loc  = 0;
       for(; loc < len; loc ++) if(pVec[loc] != qVec[loc]) break;
       return pVec[loc - 1];
   }
};

int main(){
    Solution so;

    TreeNode t01 = TreeNode(6);
    TreeNode t11 = TreeNode(2);
    TreeNode t12 = TreeNode(8);
    TreeNode t21 = TreeNode(0);
    TreeNode t22 = TreeNode(4);
    TreeNode t23 = TreeNode(7);
    TreeNode t24 = TreeNode(9);
    TreeNode t31 = TreeNode(3);
    TreeNode t32 = TreeNode(5);

    TreeNode* n01 = &t01;
    TreeNode* n11 = &t11;
    TreeNode* n12 = &t12;
    TreeNode* n21 = &t21;
    TreeNode* n22 = &t22;
    TreeNode* n23 = &t23;
    TreeNode* n24 = &t24;
    TreeNode* n31 = &t31;
    TreeNode* n32 = &t32;

    n01->left  = n11;
    n01->right = n12;

    n11->left  = n21;
    n11->right = n22;
    n12->left  = n23;
    n12->right = n24;

    n22->left  = n31;
    n22->right = n32;
    std::cout<<so.lowestCommonAncestor(n01, n11, n22)->val<<std::endl;
}