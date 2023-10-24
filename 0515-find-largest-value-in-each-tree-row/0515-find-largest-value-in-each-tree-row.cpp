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
    vector<int> largestValues(TreeNode* root) {
        find(root,0);
        return ans;
    }
    void find(TreeNode* r,int l)
    {
        if(!r)
            return;
        if(l==ans.size())
        {
            ans.push_back(r->val);
        }
        else{
            ans[l]=max(ans[l],r->val);
        }
        find(r->left,l+1);        
        find(r->right,l+1);

    }
};