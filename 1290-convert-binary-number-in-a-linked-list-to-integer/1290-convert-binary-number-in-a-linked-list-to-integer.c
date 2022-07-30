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
    int getDecimalValue(ListNode* head) {
        int c=-1,v=0;
        ListNode *a=head;
        while(head!=NULL){
            c++;
        head=head->next;}
        while(a!=NULL)
        {
            if(a->val==1)
                v+=pow(2,c);
            a=a->next;
            c--;
        }
        return v;
    }
};