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
   vector<int> a;
    vector<int> preorder(Node* root) {
        preord(root);
        return a;
    }
    void preord(Node * r)
    {
        if(r!=NULL)
        {
            a.push_back(r->val);
            for(int i=0;i<r->children.size();i++){
                preord(r->children[i]);
            }
        }
    }
};