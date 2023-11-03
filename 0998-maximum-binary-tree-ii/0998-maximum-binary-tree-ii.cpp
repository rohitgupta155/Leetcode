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
    TreeNode* insertIntoMaxTree(TreeNode* root, int val) {
        if(root->val<val)
        {
            return new TreeNode(val,root,NULL);
        }
        TreeNode* d=root;
        while(d->right&&d->right->val>val)
            d=d->right;
        if(!d->right)
            d->right=new TreeNode(val);
        else{
        TreeNode * add=new TreeNode(val,d->right,NULL);
        d->right=add;
        }
        // print(root);
        return root;
    }
    void print(TreeNode *r){
        if(!r)
            return;
        print(r->left);
        cout<<r->val<<" ";
        print(r->right);
    }
};