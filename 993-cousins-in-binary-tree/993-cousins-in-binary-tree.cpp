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
    int dx,dy;
    bool isCousins(TreeNode* root, int x, int y) {
     TreeNode* px,*py;
        findx(root,px,x,0);
        findy(root,py,y,0);
        cout<<px->val<<" "<<py->val;
        return !(px==py)&&dx==dy;
    }
    void findx(TreeNode* r, TreeNode * (&p),int x,int d)
    {
        if(!r)
            return;
        if(r->val==x)
        {
            p=r;
            dx=d;
            return;
        }
        if(r->left&&r->left->val==x){
            p=r;
            dx=d;
            cout<<p->val<<" "<<dx<<endl;
        return;}
        else if(r->right&&r->right->val==x){
            p=r;
            dx=d;
            cout<<p->val<<" "<<dx<<endl;
        return;}
        d++;
        findx(r->left,p,x,d);
        findx(r->right,p,x,d);
    }
    void findy(TreeNode* r, TreeNode * (&p),int x,int d)
    {
        if(!r)
            return;
        if(r->val==x)
        {
            p=r;
            dy=d;
            return;
        }
        if(r->left&&r->left->val==x){
            p=r;
            dy=d;
            cout<<p->val<<" "<<dx<<endl;
        return;}
        else if(r->right&&r->right->val==x){
            p=r;
              dy=d;
            cout<<p->val<<" "<<dx<<endl;
        return;}
        d++;
        findy(r->left,p,x,d);
        findy(r->right,p,x,d);
    }
};