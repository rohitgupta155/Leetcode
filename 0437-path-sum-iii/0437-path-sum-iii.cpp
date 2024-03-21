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
    int t,ans=0;
    int pathSum(TreeNode* root, int targetSum) {
        if(!root)
            return 0;
        t=targetSum;
        vector<long> a=helper(root);
        ans+= count(a.begin(),a.end(),targetSum);
        return ans;
    }
    vector<long> helper(TreeNode* r)
    {
        if(!r)
            return {};
        if(!r->left&&!r->right)
            return {r->val};
        vector<long> here;
        here.push_back(r->val);
        vector<long> left=helper(r->left);  
        vector<long> right=helper(r->right);
        for(auto i:left)
        {
            if(i==t)
                ans++;
            here.push_back(i+r->val);
        }      
        for(auto i:right)
        {
            if(i==t)
                ans++;
            here.push_back(i+r->val);
        }
        // print(here);
        return here;

    }
    void print(vector<int> v)
    {
        for(auto i:v)
            cout<<i<<" ";
        cout<<endl;
    }
};