/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    unordered_map<Node*,Node*> m;
    Node* copyRandomList(Node* head) {
        if(!head)
            return NULL;
        Node * n=new Node(head->val),*temp;
        temp=n;
        n->random=head->random;
        m[head]=n;
        head=head->next;
        while(head)
        {
        Node * t=new Node(head->val);
        t->random=head->random;
        m[head]=t;
        head=head->next;
        n->next=t;
        n=n->next;
        }
        head=temp;
        while(head)
        {
            head->random=m[head->random];
            head=head->next;
        }
        return temp;
    }
};