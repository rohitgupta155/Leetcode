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
    unordered_map<int,vector<int>> m;
    int amountOfTime(TreeNode* root, int start) {
        make(root);
        queue<pair<int,int>> q;
        q.push({start,0});
        int ans=0;
        unordered_set<int> vis;        
        while(!q.empty())
        {
            auto i=q.front();
            q.pop();
            vis.insert(i.first);
            ans=max(i.second,ans);
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