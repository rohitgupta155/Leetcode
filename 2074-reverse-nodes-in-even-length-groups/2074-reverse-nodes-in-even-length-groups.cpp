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
    ListNode* reverseEvenLengthGroups(ListNode* head) {
        if(!head->next)
            return head;
        ListNode* ans=head;
        int i=2;
        while(head)
        {
            if(i%2==0)
            {
            ListNode* curr=head,*start;
            head=head->next;
            start=head;
            int n=i-1;
            while(head&&n)
            {
                head=head->next;
                n--;
            }
            if(!head&&n%2==0)
            {
                continue;
            }
            ListNode *e=NULL;
            if(head)
           { e=head->next;
           head->next=NULL;}
            
            curr->next=reverseList(start);
            if(start)
            start->next=e;
             head=start;
            }
            else{
                int n=i-1;
                ListNode *start=head;
                head=head->next;
                while(head&&n)
                {
                    n--;
                    head=head->next;
                }
                if(!head&&n%2==0)
                {
                    start->next=reverseList(start->next);
                }
                
            }
            i++;

        }
        return ans;
        
    }
    ListNode* reverseList(ListNode* head) {
        if(!head)
            return NULL;
        ListNode * prev=NULL,*curr;
        while(head)
        {
            curr=head->next;
            head->next=prev;
            prev=head;
            head=curr;
        }
        return prev;
        
    }
};