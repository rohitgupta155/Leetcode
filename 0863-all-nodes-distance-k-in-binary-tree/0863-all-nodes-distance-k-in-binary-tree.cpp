/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    unordered_map<int,vector<int>> m;
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        make(root);
        queue<pair<int,int>> q;
        q.push({target->val,0});
        vector<int> ans;
        unordered_set<int> vis;        
        while(!q.empty())
        {
            auto i=q.front();
            q.pop();
            vis.insert(i.first);
            if(i.second==k)
                ans.push_back(i.first);
            for(auto j:m[i.first])
            {
                if(vis.find(j)==vis.end())
                q.push({j,i.second+1});
            }
        }
        return ans;
    }
    void make(TreeNode *r)
    {
        if(!r)
            return;
        if(!r->left&&!r->right)
            return;
        if(r->right){
            m[r->val].push_back(r->right->val);
            m[r->right->val].push_back(r->val);}
        if(r->left){
            m[r->val].push_back(r->left->val);
            m[r->left->val].push_back(r->val);}
        make(r->left);
        make(r->right);
        
    }
};