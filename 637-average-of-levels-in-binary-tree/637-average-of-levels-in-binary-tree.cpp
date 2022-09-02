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
    
    vector<double> averageOfLevels(TreeNode* r) {
        int max=0;
        findh(r,max,0);
        vector<double> v(max,0);
        vector<double> le(max,0);
        find(r,0,v,le);
        for(int i=0;i<max;i++)
            v[i]=v[i]/le[i];
        return v;
    }
    void find(TreeNode* r,int l,vector<double> &v,vector<double> &le)
    {
        if(r==NULL)
            return;
        v[l]+=r->val;
        le[l]++;
        l++;
        find(r->left,l,v,le);
        find(r->right,l,v,le);
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