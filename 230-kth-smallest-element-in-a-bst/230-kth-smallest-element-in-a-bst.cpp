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
    int ans;
    int kthSmallest(TreeNode* root, int k) {
        int i=1;
        traverse(root,i,k);
        return ans;
    }
    void traverse(TreeNode * root,int &i,int k)
{if(root!=NULL){
    traverse(root->left,i,k);
    if(i==k)
        ans=root->val;
    i++;
    traverse(root->right,i,k);
}
}
};