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
    bool flag=false;
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        TreeNode * start=NULL;
        find(root,subRoot);
       return flag;
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL&&q==NULL)
            return true;
       if(p==NULL||q==NULL||p->val!=q->val)
           return false;
        return isSameTree(p->left,q->left)&&isSameTree(p->right,q->right);
    }
    void find(TreeNode* r,TreeNode* s)
    {
        if(!r)
            return;
        if(r->val==s->val)
            {if(isSameTree(r,s))
                flag=true;
        }
        find(r->left,s);
        find(r->right,s);
    }
};