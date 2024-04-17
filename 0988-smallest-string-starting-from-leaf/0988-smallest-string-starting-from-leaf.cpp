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
    string ans="";
    string smallestFromLeaf(TreeNode* root) {
        push(root,{});
        return ans;
    }
    void push(TreeNode* r,string t)
    {
        if(!r)
            return;
        if(!r->left&&!r->right)
           { 
            t+=('a'+r->val);
            if(ans==""){
                ans=t;
                reverse(ans.begin(),ans.end());
            }
            else if(ans!=""){
                reverse(t.begin(),t.end());
                if(ans>t)
                    ans=t;
            }
            
            return;}
        t+=('a'+r->val);
        push(r->left,t);
        push(r->right,t);
    }
};