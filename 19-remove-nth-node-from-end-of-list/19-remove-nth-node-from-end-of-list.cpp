class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count=0;
        if(head->next==NULL)
            return NULL;
        ListNode* temp=head;
        while(temp!=NULL){
            count++;
            temp=temp->next;
    }
        if(count-1==n){
            head->next=head->next->next;
        return head;}
        temp=head;
        for(int i=0;i<count-n-1;i++)
            temp=temp->next;
        if(temp==head)
            head=head->next;
        temp->next=temp->next->next;
        return head;
        
    }
};