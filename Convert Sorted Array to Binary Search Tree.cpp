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
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return func(nums,0,nums.size()-1);
    }
    TreeNode* func(vector<int>&a,int l,int r)
    {
        if(l>r) return NULL;
        int m=(l+r)/2;
        TreeNode* t=new TreeNode(a[m]);
        t->left=func(a,l,m-1);
        t->right=func(a,m+1,r);
        return t;
    }
};