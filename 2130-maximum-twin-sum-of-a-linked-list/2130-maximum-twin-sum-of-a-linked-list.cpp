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
    ListNode* temp;
    int s=INT_MIN;
    int pairSum(ListNode* head) {
        temp=head;
        check(head);
        return s;
    }
    void check(ListNode* head)
    {
        if(head==NULL)
            return;
        check(head->next);
        int sum=head->val+temp->val;
        if(s<sum)
            s=sum;
        temp=temp->next;
    }
};