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
    unordered_map<int,int> m;
    vector<int> findFrequentTreeSum(TreeNode* root) {
        find(root);
        int f=0;
        for(auto i:m)
            f=max(f,i.second);
        vector<int> ans;
        for(auto i:m)
            if(f==i.second)
                ans.push_back(i.first);
        return ans;
    }
    int find(TreeNode *r)
    {
        if(!r)
            return 0;
        int left=find(r->left);
        int right=find(r->right);
        m[r->val+left+right]++;
        return r->val+left+right;
    }
};