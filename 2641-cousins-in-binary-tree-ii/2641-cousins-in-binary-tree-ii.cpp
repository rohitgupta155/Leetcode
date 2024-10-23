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
    vector<vector<int>> c;
    vector<int> s;
    
    void findout(TreeNode *root,int l,int left=0,int right=0)
    {
        if(!root)
            return;
        if(l==0)
            root->val=0;
        else
        {
            root->val=s[l]-right-left;
        }
        if(root->left)
            left=root->left->val;
        else left=0;
        if(root->right)
            right=root->right->val;
        else right=0;
        findout(root->left,l+1,left,right);
        findout(root->right,l+1,left,right);
        
    }
    
    TreeNode* replaceValueInTree(TreeNode* root) {
        c=levelOrder(root);
        for(auto i:c)
            s.push_back(accumulate(i.begin(),i.end(),0));
        findout(root,0);
        return root;
    }
    
     vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> v;
        find(root,0,v);
        return v;
    }
    void find(TreeNode* r,int l,vector<vector<int>> &v)
    {
        if(r==NULL)
            return;
        if(v.size()==l)
            v.push_back({});
        v[l].push_back(r->val);
        l++;
        find(r->left,l,v);
        find(r->right,l,v);
    }
    void findh(TreeNode *r,int &max,int d)
    {
        if(r==NULL)
        {
            if(max<d)
                max=d;
            return;
        }
        d++;
        findh(r->left,max,d);
        findh(r->right,max,d);
    }
};