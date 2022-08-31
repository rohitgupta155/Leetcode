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
    vector<vector<int>> a;
    vector<vector<int>> pathSum(TreeNode* root, int t) {
        if(!root)
            return a;
        vector<int> b;
        push(root,t,0,b);
        return a;
    }
    void push(TreeNode* r, int t,int s,vector<int> b)
    {
        if(r==NULL)
            return;
        b.push_back(r->val);
        s+=r->val;
        if(!r->left&&!r->right&&t==s)
         {a.push_back(b); } 
        push(r->left,t,s,b);
        push(r->right,t,s,b);
    }
};