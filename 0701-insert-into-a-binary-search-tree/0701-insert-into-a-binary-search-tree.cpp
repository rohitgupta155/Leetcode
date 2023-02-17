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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(!root)
        {
            TreeNode *temp=new TreeNode(val);
            return temp;
        }
        fill(root,val);
        return root;
    }
    void fill(TreeNode* r, int val)
    {
        if(!r)
            return;
        if(!r->right&&r->val<val)
        {
            TreeNode *temp=new TreeNode(val);
             r->right=temp;
            return;
        }
        if(!r->left&&r->val>val)
        {
            TreeNode *temp=new TreeNode(val);
             r->left=temp;
            return;
        }
        if(r->val<val)
               fill(r->right,val);
            else fill(r->left,val);

    }
};