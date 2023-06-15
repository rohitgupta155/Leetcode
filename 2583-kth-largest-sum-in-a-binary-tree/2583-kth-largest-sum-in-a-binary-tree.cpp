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
        int max=0,index;
        findh(root,max,0);
        if(k>max)
            return -1;
        vector<long long> v(max,0);
        find(root,0,v);
       sort(v.begin(),v.end(),greater<long long>());
        return v[k-1];
    }
    void find(TreeNode* r,int l,vector<long long> &v)
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