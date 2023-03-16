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
    unordered_map<int,int> m;
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int j=0;
        for(auto i:inorder)
        {
            m[i]=j++;
        }
        int n=0;
        return build(inorder,preorder,0,inorder.size()-1,n); 
    }
    TreeNode* build(vector<int>& inorder, vector<int>& preorder,int start,int end,int &n)
    {
        if(start>end)
            return NULL;
        TreeNode* root=new TreeNode(preorder[n++]);
        if(start==end)
            return root;
        root->left=build(inorder,preorder,start,m[root->val]-1,n); 
        root->right=build(inorder,preorder,m[root->val]+1,end,n);
        return root;

    }
};