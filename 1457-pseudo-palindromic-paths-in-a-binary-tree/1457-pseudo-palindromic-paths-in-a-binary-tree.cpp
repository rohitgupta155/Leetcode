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
    int c=0;
    void find(TreeNode* r,vector<int> m)
    {
        if(!r)
            return;
        m[r->val]++;
        if(!r->right&&!r->left){
            int co=0;
        for(auto i:m)
        {
            if(i%2==1)
                co++;
            if(co>1)
                return;
        }
            c++;
        return;}
        find(r->left,m);
        find(r->right,m);
         m[r->val]--;
        // if(m[r->val]==0)
        //     m.erase(m[r->val]);
        
        
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        vector<int> m(10,0);
        find(root,m);
        return c;
    }
};