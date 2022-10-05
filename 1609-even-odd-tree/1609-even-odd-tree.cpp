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
    int h=INT_MIN;
    bool flag=true;
    bool isEvenOddTree(TreeNode* root) {
        height(root,0);
        vector<vector<int>> v(h);
        check(root,0,v);
            return flag;
    }
    void height(TreeNode* r,int c)
    {
        if(!r)
        {
            h=max(c,h);
            return;
        }
        height(r->left,c+1);
        height(r->right,c+1);
    }
    void check(TreeNode *r,int c,vector<vector<int>>& v)
    {
        if(flag){
        if(!r)
            return;
        if(c%2==0&&(r->val%2==0||(v[c].size()&&v[c].back()>=r->val)))
            flag=false;
        else if(c%2==1&&(r->val%2==1||(v[c].size()&&v[c].back()<=r->val)))
            flag=false;
        else v[c].push_back(r->val);
        check(r->left,c+1,v);
        check(r->right,c+1,v);
}
        
    }
};