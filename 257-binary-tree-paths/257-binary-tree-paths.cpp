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
    vector<string> s;
    vector<string> binaryTreePaths(TreeNode* root) {
        string a="";
        push(root,a);
        return s;
    }
    void push(TreeNode* r,string a)
    {
        if(r==NULL)
            return;
        string c=to_string(r->val);
        a.append(c);
        if(!r->left&&!r->right)
         {s.push_back(a); } 
        a.append("->");
        if(r->left)
        push(r->left,a);
        if(r->right)
        push(r->right,a);
            
    }
};