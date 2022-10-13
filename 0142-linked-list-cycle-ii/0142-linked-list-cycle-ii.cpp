/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(!head||!head->next)
            return NULL;
        ListNode* slow=head,*fast=head;
        while(fast!=NULL&&fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
                break;  
        }
        if(fast==NULL||fast->next==NULL)
            return NULL;
        int c=1;
        while(fast->next!=slow)
        {
            c++;
            fast=fast->next;
        }
        fast=slow=head;
        while(c--)
        {
            fast=fast->next;
        }
        while(fast!=slow)
        {
            fast=fast->next;
            slow=slow->next;
        }
        return fast;
    }
};