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
    vector<int> findMode(TreeNode* root) {
        vector<int>a;
        traverse(root,a);
        unordered_map<int,int> m;
        for(int i:a)
            m[i]++;
        int ma=0;
        for(auto i:m)
            ma=max(ma,i.second);
        a.clear();
        for(auto i:m)
            if(i.second==ma)
                a.push_back(i.first);
        return a;
    }
    void traverse(TreeNode* r,vector<int>&a)
    {
        if(!r)
            return;
        a.push_back(r->val);
        traverse(r->left,a);
        traverse(r->right,a);
    }
};