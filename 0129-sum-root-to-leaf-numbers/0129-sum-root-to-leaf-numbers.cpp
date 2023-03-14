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
    int sum=0;
    int sumNumbers(TreeNode* root) {
        push(root,0);
        return sum;
    }
    void push(TreeNode* r,int a)
    {
        if(!r)
            return;
        if(!r->left&&!r->right)
           { 
            a=(r->val+a*10);
            sum+=a;
            return;}
        a=(r->val+a*10);
        push(r->left,a);
        push(r->right,a);
    }
};