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
    int averageOfSubtree(TreeNode* root) {
        int n=0,sum=0;
        find(root);
            return c;
    }
    pair<int,int> find(TreeNode *r)
    {
        if(!r)
            return {0,0};
        if(!r->left && !r->right){
            c++;
            return {r->val,1};
        }
        pair<int,int> left=find(r->left);
        pair<int,int> right=find(r->right);
        int total=left.first+right.first+r->val;
        int count=right.second+left.second+1;
        if(total/count==r->val){
            c++;
        }
        return {total,count};
        
    }
    
};