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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth==1)
        {
            TreeNode *r= new TreeNode(val);
            r->left=root;
            return r;
        }
        add(root,val,1,depth);
        return root;
    }
    void add(TreeNode* r, int v, int c,int d)
    {
        if(!r)
            return;   
        if(c==d-1)
            {
                TreeNode *l=new TreeNode(v),*ri=new TreeNode(v);
                if(r->left)l->left=r->left;
                if(r->right)ri->right=r->right;
                r->left=l;
                r->right=ri;
            }
        else{
        add(r->left,v,c+1,d);
        add(r->right,v,c+1,d);
        }
    }
};