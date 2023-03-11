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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
    return make(nums,0,nums.size()-1);
    }
    TreeNode* make(vector<int> &nums,int l,int r)
    {
        if(l<=r){
    int m=(l+r)/2;
    TreeNode *root=new TreeNode(nums[m]);
    root->left=make(nums,l,m-1);
    root->right=make(nums,m+1,r);
    return root;}
        return NULL;
    }
};