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
    set<int> s;
    void se(TreeNode * r)
    {
        if(!r)
            return;
        s.insert(r->val);
        se(r->left);
        se(r->right);
    }
    int findSecondMinimumValue(TreeNode* root) {
        se(root);
        if(s.size()==1)
            return -1;
        set<int>::iterator st = s.begin();
        advance(st,1);
        return *st;
    }
};