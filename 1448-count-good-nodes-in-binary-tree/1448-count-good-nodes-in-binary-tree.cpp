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
    int c=0;
    int goodNodes(TreeNode* root) {
        check(root,INT_MIN);
        return c;
    }
    void check(TreeNode* r,int m)
    {
        if(!r)
            return;
        if(m<=r->val)
        {
            m=r->val;
            c++;
        }check(r->left,m);
        check(r->right,m);
        
    }
};