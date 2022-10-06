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
    bool ans=false;
    int c=1;
    unordered_map<int,int> m;
    bool findTarget(TreeNode* root, int k) {
        set(root);
        find(root,k);
        return ans;
    }
    void set(TreeNode* r)
    {
        if(!r)
            return;
        m[r->val]=c;\
            c++;
        set(r->left);
        set(r->right);
    }
    void find(TreeNode* r,int k)
    {
        if(!r)
            return;
        if(m.count(k-r->val)&&m[k-r->val]!=m[r->val])
        ans=true;
        find(r->left,k);
        find(r->right,k);
    }
};