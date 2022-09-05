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
    bool isUnivalTree(TreeNode* root) {
        int val=root->val,c=root->val;
        check(root,val,c);
        return c==root->val;
    }
    void check(TreeNode* r,int &v,int &c)
    {
       if(!r)
            return;
        if(r->val!=v)
           { c=r->val;
        return;}
        check(r->left,v,c);
        check(r->right,v,c);
    }
};