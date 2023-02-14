/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    vector<Node*> a;
    Node* connect(Node* root) {
        a.push_back(NULL);
        fill(root,0);
        return root;
    }
    void fill(Node* r,int l)
    {
        if(!r)
            return;
        if(l==a.size())
        a.push_back(NULL);
        r->next=a[l];
        a[l]=r;
        fill(r->right,l+1);
        fill(r->left,l+1);
        
    }
};