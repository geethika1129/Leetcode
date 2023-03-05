/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private:
    bool util(TreeNode* p,TreeNode* q){
        if(p==NULL||q==NULL) return p==q;
        return(p->val==q->val)&&util(p->left,q->right)&&util(p->right,q->left);
    }
public:
    bool isSymmetric(TreeNode* root) {
        if(!root) return true;
        return util(root->left,root->right);
    }
};