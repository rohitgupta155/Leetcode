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
    int max=0,sum=0;
    int deepestLeavesSum(TreeNode* r) {
        findh(r,max,0);
        find(r,0);
        return sum;
    }
    void find(TreeNode* r,int l)
    {
        if(r==NULL)
            return;
        if(l==max-1)
            sum+=r->val;
        l++;
        find(r->left,l);
        find(r->right,l);
    }
    void findh(TreeNode *r,int &max,int d)
    {
        if(r==NULL)
        {
            if(max<d)
                max=d;
            return;
        }
        d++;
        findh(r->left,max,d);
        findh(r->right,max,d);
    }
};