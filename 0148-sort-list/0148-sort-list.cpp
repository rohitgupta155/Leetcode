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
    ListNode* sortList(ListNode* head) {
        if(!head||!head->next)
            return head;
        ListNode* mid=findmid(head);
        ListNode* left=sortList(head);
        ListNode* right=sortList(mid);
        return merge(left,right);
    }
    ListNode* merge(ListNode* left,ListNode* right)
    {
        ListNode* temp;
        ListNode du;
        temp=&du;
        while(left&&right)
        {
            if(left->val<right->val)
            {
                temp->next=left;
                left=left->next;
                temp=temp->next;
            }
            else {
                temp->next=right;
                right=right->next;
                temp=temp->next;

            }
        }
        if(right)
            temp->next=right;
        else temp->next=left;
        return du.next;
    }
    ListNode* findmid(ListNode* head)
    {
        ListNode *slow=nullptr;
        while(head&&head->next)
        {
            slow=slow==nullptr?head:slow->next;
            head=head->next->next;
        }
        ListNode *mid=slow->next;
        slow->next=nullptr;
        return mid;
    }
};