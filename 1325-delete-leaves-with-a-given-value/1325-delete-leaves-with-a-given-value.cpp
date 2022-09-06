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
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
        if(!root->left&&!root->right&&root->val==target)
            return NULL;
        prune(root,root,target);
        if(!root->left&&!root->right&&root->val==target)
            return NULL;
        return root;
    }
    void prune(TreeNode* (&r),TreeNode* (&p),int t)
    {
        if(!r)
            return;
        prune(r->left,r,t);
        prune(r->right,r,t);  
        if(p->left&&!(p->left->left)&&!(p->left->right)&&p->left->val==t)
            {
            p->left=NULL;
        }
 if(p->right&&!(p->right->left)&&!(p->right->right)&&p->right->val==t)
            {p->right=NULL;
            }
    }
};