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
    int minDepth(TreeNode* root) {
        int min=100000;
        find(root,min,0);
        return min;
    }
    void find(TreeNode *r,int &min,int d)
    {
       
        if(r==NULL)
        {
            if(min>d)
                min=d;
            return;
        } 
        d++;
        if(r->left==NULL)
        find(r->right,min,d);
        else if(r->right==NULL)
            find(r->left,min,d);
        else{
                    find(r->right,min,d);   
            find(r->left,min,d);
        }
    }
};