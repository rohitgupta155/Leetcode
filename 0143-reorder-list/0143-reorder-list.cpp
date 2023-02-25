/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* start,*done;
    bool o=true;
    void reorderList(ListNode* head) {
        if(!head->next||!head->next->next)
            return;
        start=head;
        order(head);
    }
    void order(ListNode* h)
    {
        if(!h)
            return;
            
            order(h->next);
            if(o){if(start->next==done||start->next->next==done)
            {
                if(start->next==done)
                    start->next=NULL;
                else start->next->next=NULL;
                o=false;
                return;
            }
            h->next=start->next;
            start->next=h;
            start=h->next;
            done=h; }
        
    }
};