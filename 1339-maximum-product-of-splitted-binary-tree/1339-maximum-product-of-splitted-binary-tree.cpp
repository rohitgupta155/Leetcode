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
    long long int s=0,l=0;
    int maxProduct(TreeNode* root) {
        sum(root);
        find(root);
        return l%1000000007;
    }
    void sum(TreeNode* r)
    {
        if(!r)
            return;
        s+=r->val;
        sum(r->left);
        sum(r->right);
    }
    long long int find(TreeNode* r)
    {
        if(!r)
            return 0;
        long long int ls=find(r->left);
        long long int rs=find(r->right);
        long long int pl=ls*(s-ls);      
        long long int pr=rs*(s-rs);
        if(l<pl)
            l=pl;
        if(l<pr)
            l=pr;
        return r->val+ls+rs;

        
    }
    
};