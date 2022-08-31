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
bool flag=false;
    bool hasPathSum(TreeNode* root, int t) {
        if(root==NULL)
            return false;
            check(root,t,0);
        return flag;
        
    }
    void check(TreeNode* r,int t,int s){     
     if(r==NULL)
            return;
        s+=r->val;
        check(r->left,t,s);
        check(r->right,t,s);
        if(t==s&&!r->left&&!r->right)
            flag=true;
    }
};