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
    bool isSameTree(TreeNode* p, TreeNode* q) {
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
                    q_curr = q_curr->left;
                }

            }
            catch(std::exception& e){
                return false;
            }catch(int e){
                return false;
            }
            if(q_curr != NULL) return false;
            std::cout<<p_nodes.size()<<std::endl;
            p_curr = p_nodes.back()->right;
            q_curr = q_nodes.back()->right;
            p_nodes.pop_back();
            q_nodes.pop_back();
        }
        return true;
    }
};


//@CAUTION 指针声明
//@CAUTION 指针为空调值会直接退出
//@CAUTION TEST CASE: 一定要考虑传入的数据为空，或者空指针
int main(){
    Solution so = Solution();
    auto n1_tree = TreeNode(1);
    auto n1_left = (TreeNode(2));
    n1_tree.left = &n1_left;
    auto n2_tree = TreeNode(1);
    n2_tree.left = NULL;
    auto n2_right = (TreeNode(2));
    n2_tree.right = &n2_right;
    std::cout<<so.isSameTree(&n1_tree, &n2_tree)<<std::endl;
}