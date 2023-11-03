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
    TreeNode* constructMaximumBinaryTree(vector<int> nums) {
        if(nums.size()==0)
            return NULL;
        if(nums.size()==1)
        {
            return new TreeNode(nums[0]);
        }
        int index,val=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            if(val<nums[i])
                val=nums[i],index=i;
        }
        vector<int> left,right;
        for(int i=0;i<index;i++)
            left.push_back(nums[i]);
        for(int i=index+1;i<nums.size();i++)
            right.push_back(nums[i]);
        TreeNode* lefttree=constructMaximumBinaryTree(left);                   
        TreeNode* righttree=constructMaximumBinaryTree(right);
        return new TreeNode(val,lefttree,righttree);
        
    }
};