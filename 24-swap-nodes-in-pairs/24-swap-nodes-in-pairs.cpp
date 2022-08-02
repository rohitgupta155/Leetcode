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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL||head->next==NULL)
            return head;
        ListNode *first=head,*second=head->next;
        if(second->next==NULL)
        {
            int temp=first->val;
            first->val=second->val;
            second->val=temp;
            return head;
        }
        while(1)
        {
           if(second==NULL){
              break;
           }
            else if(second->next==NULL)
            {
                 int temp=first->val;
            first->val=second->val;
            second->val=temp;
                break;
            }
            int temp=first->val;
            first->val=second->val;
            second->val=temp;
            first=second->next;
             second=first->next;
          }
        return head;
    }
};