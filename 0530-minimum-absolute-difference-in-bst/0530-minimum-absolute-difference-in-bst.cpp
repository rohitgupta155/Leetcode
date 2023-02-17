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
    int m=INT_MAX;
    set<int> s;
    void find(TreeNode *r)
    {
        if(!r)
            return;
        s.insert(r->val);
        find(r->left);
        find(r->right);
        
    }
    int getMinimumDifference(TreeNode* root) {
        find(root);
        vector<int> v(s.begin(),s.end());
        for(int i=0;i<v.size()-1;i++)
            m=min(v[i+1]-v[i],m);
        return m;
    }
};