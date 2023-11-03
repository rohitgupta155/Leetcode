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
    TreeNode* bstFromPreorder(vector<int> p) {
        if(p.size()==0)
            return NULL;
        if(p.size()==1)
            return new TreeNode(p[0]);
        vector<int> l,r;
        int i=1;
        while(i<p.size()&&p[i]<p[0])
            l.push_back(p[i++]);
        while(i<p.size())
            r.push_back(p[i++]);
        return new TreeNode(p[0],bstFromPreorder(l),bstFromPreorder(r));
    }
};