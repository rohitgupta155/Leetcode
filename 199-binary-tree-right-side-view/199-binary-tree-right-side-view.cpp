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
    vector<int> ans;
    vector<int> rightSideView(TreeNode* r) {
        if(!r)
            return {};
        insert(r,0);
        return ans;
    }
    void insert(TreeNode* r,int i)
    {
        if(!r)
            return;
        if(i==ans.size())
        ans.push_back(r->val);
         insert(r->right,i+1);
        insert(r->left,i+1); 
                
    }
};