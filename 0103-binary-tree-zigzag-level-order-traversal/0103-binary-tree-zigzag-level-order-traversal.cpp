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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        int max=0;
        findh(root,max,0);
        vector<vector<int>> v(max);
        find(root,0,v);
                for(int i=1;i<max;i+=2)
      reverse(v[i].begin(),v[i].end());
        return v;
    }
     void find(TreeNode* r,int l,vector<vector<int>> &v)
    {
        if(r==NULL)
            return;
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