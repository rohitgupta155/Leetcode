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
    TreeNode* invertTree(TreeNode* root) {
        if(!root)return NULL;
        solve(root);
        return root;
    }
    void solve(TreeNode* r)
    {
        if(!r)
            return;
        TreeNode* temp=r->left;
        r->left=r->right;
        r->right=temp;
        solve(r->left);
        solve(r->right);
    }
};