/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if(!root)
            return "";
        string ans;
        queue<TreeNode*> q;
        q.push(root);
        ans+=to_string(root->val)+",";
        while(!q.empty())
        {
            TreeNode* curr =q.front();
            q.pop();
            
            if(curr->left)
            {ans+=to_string(curr->left->val)+",";
             q.push(curr->left);}
            else ans+="null,";
            if(curr->right)
               {ans+=to_string(curr->right->val)+",";
                q.push(curr->right);}
            else ans+="null,";
        }
        ans.pop_back();
        // cout<<ans;
        return ans;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string d) {
        if(d=="")
            return NULL;
        vector<string> data;
        string a;
        for(auto i:d)
        {
            if(i==',')
            {
                data.push_back(a);
                a="";
            }
            else a+=i;
        }
        data.push_back(a);
        queue<TreeNode*> q;
        TreeNode *head=new TreeNode(stoi(data[0]));
        q.push(head);
        int i=1;
        while(!q.empty())
        {
            TreeNode* curr=q.front();
            q.pop();
            string left=data[i],right=data[i+1];
            i+=2;
            if(left!="null")
            {
                TreeNode* l=new TreeNode(stoi(left));
                curr->left=l;
                q.push(l);
            }
            if(right!="null")
            {
                TreeNode* r=new TreeNode(stoi(right));
                curr->right=r;
                q.push(r);
            }
        }
        return head;
        
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));