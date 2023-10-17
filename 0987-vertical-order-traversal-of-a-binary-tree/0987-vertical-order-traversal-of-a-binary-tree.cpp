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
    vector<unordered_map<int,vector<int>>> findings;
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        find(root,0,0);
//         for(auto i:findings)
//         {
//             for(auto j:i)
//             {
//                 cout<<j.first<<": ";
//                 for(auto k:j.second)
//                     cout<<k<<" ";
//                 cout<<endl;    
//             }
            
//         }
        map<int,vector<int>> m;
        for(auto i:findings)
        {
            for(auto j:i)
            {
                if(j.second.size()>1)
                {
                    vector<int> temp=j.second;
                    sort(temp.begin(),temp.end());
                    
                    for(auto k:temp)
                        m[j.first].push_back(k);
                }
                else
                    m[j.first].push_back(j.second[0]);
            }
        }
        vector<vector<int>> ans;
        for(auto i:m)
           {
           ans.push_back(i.second);
        }
        return ans;
    }
    void find(TreeNode* root,int i,int j)
    {
        if(findings.size()<=i)
        {
            findings.push_back({{j,{root->val}}});
        }
        else{
            findings[i][j].push_back(root->val);
        }
        if(root->left)
        {
            find(root->left,i+1,j-1);
        }
        if(root->right)
        {
            find(root->right,i+1,j+1);
        }
    }
};