/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* c;
    Node* flatten(Node* head) {
        if(!head)
            return head;
        check(head,head->prev);
        return head;
    }
    void check(Node *r,Node *p)
    {
        if(!r)
            return;
        c=r;
        r->prev=p;
        Node *n=r->next;
        if(r->child){
            r->next=r->child;
            check(r->child,r);
        }
        r->child=NULL;
        c->next=n;
        check(n,c);
    }
};