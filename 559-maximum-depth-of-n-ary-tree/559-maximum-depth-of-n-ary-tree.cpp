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
            int max=0;
    int maxDepth(Node* root) {
        if(root==NULL)
            return 0;
        find(root,0);
        return max;
    }
    void find(Node *r,int d)
    {
        cout<<d<<" ";
        if(r->children.size()==0)
        {
            if(max<d+1)
                max=d+1;
            return;
        }
        d++;
        for(int i=0;i<(r->children.size());i++)
        find(r->children[i],d);
    }
};