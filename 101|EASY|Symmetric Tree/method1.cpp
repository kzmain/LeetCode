#include <list>
#include <iostream>



struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        auto p = root;
        auto q = root;
        //Caution
        if (p == NULL or q == NULL) {
            return q == p;
        }
        TreeNode *p_curr = p;
        TreeNode *q_curr = q;
        std::list<TreeNode*> p_nodes;
        std::list<TreeNode*> q_nodes;
        while (p_curr != NULL || !p_nodes.empty()) {
            try{
                while (p_curr != NULL) {
                    if(q_curr == NULL) return false;
                    if(p_curr->val != q_curr->val) return false;
                    p_nodes.push_back(p_curr);
                    q_nodes.push_back(q_curr);
                    p_curr = p_curr->left;
                    q_curr = q_curr->right;
                }

            }
            catch(std::exception& e){
                return false;
            }catch(int e){
                return false;
            }
            if(q_curr != NULL) return false;
            p_curr = p_nodes.back()->right;
            q_curr = q_nodes.back()->left;
            p_nodes.pop_back();
            q_nodes.pop_back();
        }
        return true;
    }
};

int main(){
    Solution so = Solution();
    auto n1_tree = TreeNode(1);
    auto n1_left = (TreeNode(2));
    auto n1_right = (TreeNode(3));
    n1_tree.left = &n1_left;
    n1_tree.right = &n1_right;
    std::cout<<so.isSymmetric(&n1_tree)<<std::endl;
}