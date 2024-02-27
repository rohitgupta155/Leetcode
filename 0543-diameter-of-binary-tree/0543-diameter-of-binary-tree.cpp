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
    int diameterOfBinaryTree(TreeNode* r)
    {
        diameterOfTree(r);
        return ans;
    }
    int diameterOfTree(TreeNode* r) {
       if(!r)
           return 0;
       if(!r->left&&!r->right)
           return 1;
        int l=diameterOfTree(r->left);
        int ri=diameterOfTree(r->right);
        ans=max(ans,ri+l);
        return max(ri,l)+1;
    }
};