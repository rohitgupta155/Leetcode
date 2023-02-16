/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        if(root==NULL)
            return {};
        int max=0;
        findh(root,max,0);
        vector<vector<int>>v(max+1);
        find(root,0,v);
        return v;
    }
    void find(Node* r,int l,vector<vector<int>> &v)
    {
        if(r==NULL)
            return;
        v[l].push_back(r->val);
        l++;
         for(int j=0;j<r->children.size();j++)
            {
                find(r->children[j],l,v);
            }
    }
    void findh(Node *r,int &max,int d)
    {
        if(r->children.size()==0)
        {
            if(max<d)
                max=d;
            return;
        }
        d++;
         for(int j=0;j<r->children.size();j++)
            {
                findh(r->children[j],max,d);
            }
    }

};