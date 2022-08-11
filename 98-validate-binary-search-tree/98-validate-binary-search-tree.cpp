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
    bool isValidBST(TreeNode* root) {
     return(isbst(root,LONG_MIN,LONG_MAX));
    }
    bool isbst(TreeNode * node,long long min,long long max)
    {
        if(node==NULL)
            return true;
        if(node->val<=min||node->val>=max)
            return false;
         return isbst(node->left,min,node->val) && isbst(node->right,node->val,max);
    }
};