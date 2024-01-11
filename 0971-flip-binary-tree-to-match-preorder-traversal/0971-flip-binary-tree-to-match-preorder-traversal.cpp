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
    bool possible=true;
    vector<int> flipMatchVoyage(TreeNode* root, vector<int>& voyage) {
        if(root->val!=voyage[0])
            return {-1};
        int i=0;
        check(root,voyage,i);
        return ans;
    }
   void check(TreeNode* r, vector<int>& voyage,int &i)
   {
       if(!r||!possible)
           return;
       if(r->val!=voyage[i])
       {
           possible=false;
                    ans={-1};
                    return;
       }
       i++;
       
       if(r->left)
       {
           if(r->left->val!=voyage[i])
           {
               ans.push_back(r->val);
               swap(r->left,r->right);
           }
       }
           check(r->left,voyage,i);
           check(r->right,voyage,i);
//        else if(r->left)
//        {
//            if(r->left->val!=voyage[i]){
//                possible=false;
//                     ans={-1};
//                     return;
//            }
//            i++;
//            check(r->left,voyage,i);
//        }
//        else if(r->right){
//            if(r->right->val!=voyage[i]){
//                possible=false;
//                     ans={-1};
//                     return;
//            }
//            i++;
//            check(r->right,voyage,i);

//        }
   }

    void c(TreeNode* r, vector<int>& voyage,int &i)
    {
        if(!r||!possible)
            return;
        if(!r->right&&!r->left){
            i++;
            return;
        }
        if(r->left)
        {
            if(r->left->val!=voyage[i])
            {
                if(r->right&&r->right->val!=voyage[i]||!r->right)
                {
                    possible=false;
                    ans={-1};
                    return;
                }
                
                swap(r->left,r->right);
                ans.push_back(r->val);
            }
            
        }
        else{
             if(r->right&&r->right->val!=voyage[i])
                {
                    possible=false;
                    ans={-1};
                    return;
                }
        }
        i++;
        check(r->left,voyage,i);
        // if(r->right&&r->right->val!=voyage[i])
        //         {
        //             possible=false;
        //             ans={-1};
        //             return;
        //         }
        // else i++;
        check(r->right,voyage,i);
    }
};