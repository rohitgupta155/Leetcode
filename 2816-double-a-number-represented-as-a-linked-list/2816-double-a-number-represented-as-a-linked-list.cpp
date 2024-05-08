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
    int rem=0;
    ListNode* doubleIt(ListNode* head) {
       check(head);
        if(rem)
        {
            ListNode* n=new ListNode(1,head);
            head=n;
        }
        return head;
    }
    void check(ListNode* h)
    {
        if(!h)
            return;
        check(h->next);
        h->val=h->val*2+rem;
        rem=h->val/10;
        h->val=h->val%10;
    }
};