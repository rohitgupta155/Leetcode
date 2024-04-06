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
    ListNode* partition(ListNode* head, int p) {
        ListNode *start=new ListNode(),*end=new ListNode();
        ListNode *dummy=start,*dummy1=end;
        
        while(head)
        {
            if(head->val<p)
            {
                start->next=head;
                start=start->next;
            }
            else
            {
                end->next=head;
                end=end->next;
            }
            head=head->next;
        }
        end->next=NULL;
        start->next=dummy1->next;
        return dummy->next;
    }
};