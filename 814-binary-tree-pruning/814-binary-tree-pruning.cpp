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
    TreeNode* pruneTree(TreeNode* root) {
        if(!root->left&&!root->right&&root->val==0)
            return NULL;
        prune(root,root);
        if(!root->left&&!root->right&&root->val==0)
            return NULL;
        return root;
    }
    void prune(TreeNode* (&r),TreeNode* (&p))
    {
        if(!r)
            return;
        prune(r->left,r);
        prune(r->right,r);  
        if(p->left&&!(p->left->left)&&!(p->left->right)&&p->left->val==0)
            {
            p->left=NULL;
        }
 if(p->right&&!(p->right->left)&&!(p->right->right)&&p->right->val==0)
            {p->right=NULL;
            }
    }
};