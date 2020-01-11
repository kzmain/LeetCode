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
public:
    std::vector<std::vector<int>> result = std::vector<std::vector<int>>{};

    void iter(TreeNode* root, int level){
        if(root == NULL) return;
        if(level == result.size()) result.emplace_back();

        this->result[level].push_back(root->val);

        if(root->left  != NULL) this->iter(root->left , level + 1);
        if(root->right != NULL) this->iter(root->right, level + 1);

    }

    std::vector<std::vector<int>> levelOrderBottom(TreeNode* root) {
        if(root == NULL) return this->result;
        this->iter(root, 0);
        std::reverse(this->result.begin(), this->result.end());
        return this->result;
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
    auto test = so.levelOrderBottom(&n1_tree);
    std::cout << "Len: "<< test.size() << "\n";
    for (const auto &vi : test)
        for(auto v : vi)
            std::cout << v <<" ";
//    std::cout<<so.levelOrderBottom(&n1_tree)[0][0]<<std::endl;
}