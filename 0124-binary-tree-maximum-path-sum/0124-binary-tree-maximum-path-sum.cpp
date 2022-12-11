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
    int m=INT_MIN;
    int maxPathSum(TreeNode* root) {
        maxs(root);
        return m;
    }
    
    int maxs(TreeNode* r)
    {
        if(!r)
            return 0;
        int l=max(0,maxs(r->left));
        int ri=max(maxs(r->right),0);
        m=max(m,l+ri+r->val);
        return max(l+r->val,ri+r->val);
    }
};