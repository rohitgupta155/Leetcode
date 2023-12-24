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
    vector<TreeNode*> allPossibleFBT(int n) {
        if(n%2==0)
        return {};
        
        if(n==1)
            return {new TreeNode()};
        vector<TreeNode*> res;
        for(int i=1;i<n;i+=2)
        {
            vector<TreeNode*> left=allPossibleFBT(i);
            vector<TreeNode*> right=allPossibleFBT(n-i-1);
        for(auto i:left)
            for(auto j:right)
            {
                res.push_back(new TreeNode(0,i,j));
            }
        }
        return res;
    }
};