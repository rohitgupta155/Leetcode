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
    int ans=0;
    int sumRootToLeaf(TreeNode* root) {
        if(!root->left&&!root->right)
            return root->val;
        find(root,0);
        return ans;
    }
    void find(TreeNode* r,int p)
    {
        if(!r)
            return;
        p=(p<<1)|r->val;
        find(r->left,p);
        find(r->right,p);
        if(!r->right&&!r->left)
            ans+=p;
        
    }
};