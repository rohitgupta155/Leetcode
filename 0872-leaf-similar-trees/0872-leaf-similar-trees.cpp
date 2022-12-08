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
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> a,b;
        find(root1,a);
        find(root2,b);
        return a==b;
    }
    void find(TreeNode* r,vector<int>& a)
    {
        if(!r)
            return;
        if(!r->left&&!r->right)
        {
            a.push_back(r->val);
            return;
        }
        find(r->left,a);
        find(r->right,a);
    }
};