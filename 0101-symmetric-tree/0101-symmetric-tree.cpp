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
    int flag=1;
    bool isSymmetric(TreeNode* r) {
        check(r,r);
        return flag;
    }
    void check(TreeNode * l, TreeNode * r)
    {
        if(r==NULL&&l==NULL)
          return;
        
        if(l->val!=r->val||(r->left&&!l->right)||(l->left&&!r->right)||(!r->left&&l->right)||(!l->left&&r->right))
            flag=0;
        if(l->left&&r->right)
        check(l->left,r->right);
        if(r->left&&l->right)
        check(l->right,r->left);
    }
};