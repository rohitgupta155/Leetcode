/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    struct ListNode * temp=head,*tail=head;
    while(temp!=NULL&&temp->next!=NULL){
         temp=temp->next->next;
         tail=tail->next;
        if(tail==temp)
            return true;
        }
return false;
    
}