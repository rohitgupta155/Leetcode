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
    TreeNode* reverseOddLevels(TreeNode* root) {
        stack<int> s;
        queue<TreeNode*> q;
        int i=0;
        q.push(root);
        while(!q.empty())
        {
            int n=q.size();
            if(i%2==0)
            {
                while(n--)
                {
                    if(q.front()->left){
                    s.push(q.front()->left->val);
                    q.push(q.front()->left);
                    }
                    if(q.front()->right){
                    s.push(q.front()->right->val);
                    q.push(q.front()->right);
                    }
                    q.pop();
                    
                }
            }
            else{
                while(n--)
                {
                    q.front()->val=s.top();
                    s.pop();
                    if(q.front()->left){
                    q.push(q.front()->left);
                    }
                    if(q.front()->right){
                    q.push(q.front()->right);
                    }
                    q.pop();
                }
            }
            i++;
        }
        return root;
    }
};