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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* t=head->next,*curr;
        head=head->next;
        curr=head;
        while(t)
        {       int sum=0;
                while(1)
                {sum+=t->val;
                if(t->next->val==0)
                    break;
                t=t->next;}
                curr->val=sum;
                curr->next=t->next->next;
                curr=curr->next;
                t=curr;
        }
        return head;
    }
};