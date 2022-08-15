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
    vector<int> postorder(Node* root) {
        postord(root);
        return a;
    }
    void postord(Node * r)
    {
        if(r!=NULL)
        {
            for(int i=0;i<r->children.size();i++){
                postord(r->children[i]);
            }
            a.push_back(r->val);
        }
    }
};