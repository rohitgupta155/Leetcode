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
    TreeNode* ans=NULL;
    bool pf=0,qf=0;
    TreeNode* lowestCommonAncestor(TreeNode* r, TreeNode* p, TreeNode* q) {
        vector<int> a=find(r,p,q);
        return ans;
    }
    vector<int> find(TreeNode* r, TreeNode* p, TreeNode* q)
    {
        if(!r||ans)
            return {0,0};
        vector<int> a=find(r->left,p,q);     
        vector<int> b=find(r->right,p,q);
        if(ans)
            return {0,0};
        a[0]=a[0]|b[0]|(r->val==p->val);  
        a[1]=a[1]|b[1]|(r->val==q->val);

        
        if(a[0]&&a[1])
        {
            ans=r;
        }  
        return a;
        
        
    }
};