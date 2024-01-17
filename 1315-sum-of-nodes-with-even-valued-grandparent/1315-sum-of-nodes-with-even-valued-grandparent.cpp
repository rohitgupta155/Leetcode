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
    int sum=0;
    int sumEvenGrandparent(TreeNode* root) {
        if(root->right)
            find(root,root->right);
        if(root->left)
            find(root,root->left);
        return sum;
    }
    void find(TreeNode* dada,TreeNode * baap){
        if(!baap)
            return;
        if(baap->right){
            if(dada->val%2==0)
                sum+=baap->right->val;
        }
        if(baap->left)
        {   
        if(dada->val%2==0)
                sum+=baap->left->val;
        }
    if(baap->right)
            find(baap,baap->right);
    if(baap->left)
            find(baap,baap->left);
    }
};