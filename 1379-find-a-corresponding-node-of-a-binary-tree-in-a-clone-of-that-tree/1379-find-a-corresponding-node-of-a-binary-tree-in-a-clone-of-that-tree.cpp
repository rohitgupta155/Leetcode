/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        int val=target->val;
        TreeNode* t;
        find(cloned,t,val);
        return t;   
    }
    void find(TreeNode* c, TreeNode* &t,int v)
    {
        if(!c)
            return;
        if(c->val==v)
          {  t=c;
          return;}
        find(c->left,t,v);
        find(c->right,t,v);
    }
};