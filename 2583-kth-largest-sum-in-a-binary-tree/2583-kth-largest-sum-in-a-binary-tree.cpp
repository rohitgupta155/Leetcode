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
    long long kthLargestLevelSum(TreeNode* root, int k) {
        vector<long long> v;
        find(root,0,v);
        sort(v.begin(),v.end());
        if(k>v.size())
            return -1;
        return v[(int)v.size()-k];
    }
    void find(TreeNode* r,int l,vector<long long> &v)
    {
        if(!r)
            return;
        if((int)v.size()==l)
            v.push_back(0);
        v[l]+=r->val;
        l++;
        find(r->left,l,v);
        find(r->right,l,v);
    }
};