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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int j=0;
        for(auto i:inorder)
        {
            m[i]=j++;
        }
        int n=postorder.size()-1;
        return build(inorder,postorder,0,inorder.size()-1,n); 
    }
    TreeNode* build(vector<int>& inorder, vector<int>& postorder,int start,int end,int &n)
    {
        if(start>end||n<0)
            return NULL;
        TreeNode* root=new TreeNode(postorder[n--]);
        if(start==end)
            return root;
        root->right=build(inorder,postorder,m[root->val]+1,end,n);
        root->left=build(inorder,postorder,start,m[root->val]-1,n); 
        return root;

    }
};