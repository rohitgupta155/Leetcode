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
    int l=-1,a;
    int findBottomLeftValue(TreeNode* r) {
        traverse(r,0);
        return a;
    }
     void traverse(TreeNode* r,int c)
    {
        if(!r)
            return;
         if(!r->left&&!r->right)
         {
             if(l<c)
                 {l=c;
                 a=r->val;}
                 return;
         }
        traverse(r->left,c+1);
        traverse(r->right,c+1);
    }
};