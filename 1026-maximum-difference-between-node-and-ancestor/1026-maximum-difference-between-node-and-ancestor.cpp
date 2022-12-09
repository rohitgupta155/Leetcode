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
    int m=0;
    int maxAncestorDiff(TreeNode* root) {
        if(!root)
            return 0;
        help(root,root->val,root->val);
        return m;
    }
    void help(TreeNode* r,int ma,int mi)
    {
        if(!r)
            return;
        m=max(m,max(abs(ma-r->val),abs(mi-r->val)));
        ma=max(ma,r->val);
        mi=min(mi,r->val);
        help(r->left,ma,mi);
        help(r->right,ma,mi);
    }
};