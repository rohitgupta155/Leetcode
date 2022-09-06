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
    int maxLevelSum(TreeNode* root) {
        int max=0,index;
        findh(root,max,0);
        vector<int> v(max,0);
        find(root,0,v);
        int maxi=INT_MIN;
        for(int i=0;i<max;i++)
            if(maxi<v[i])
            {
                maxi=v[i];
                index=i+1;
            }
        return index;
    }
    void find(TreeNode* r,int l,vector<int> &v)
    {
        if(r==NULL)
            return;
        v[l]+=r->val;
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