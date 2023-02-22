/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
   
     int c=0;
    struct ListNode* l3=NULL,*temp,*curr;
    while(l1!=NULL||l2!=NULL||c>0)
    {
        int sum=c;
        if(l1!=NULL){
            sum+=l1->val;
            l1=l1->next;}
        if(l2!=NULL){
            sum+=l2->val;
            l2=l2->next;}
        c=sum<10?0:sum/10;
        sum=sum<10?sum:sum%10;
        struct ListNode *curr=(struct ListNode*)malloc(sizeof(struct ListNode));
        curr->val=sum;
        if(l3==NULL)
        {
            curr->next=NULL;
            l3=temp=curr;
        }
        else{
            curr->next=NULL;
            temp->next=curr;
            temp=curr;
        }   
    }
return l3;
}