/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* mergeTwoLists(struct ListNode* a, struct ListNode* b){
   struct ListNode * c=a,*e,*d=a;
//     t=list1;
//     if(list1==NULL)
//         return list2;
//     else if(list2==NULL)
//         return list1;
//     else{
//     while(list1!=NULL||list2!=NULL)
//     {
//         if(list1->next==NULL)
//         {
//             list1->next=list2;
//             break;
//         }
//         else if(list2->next==NULL)
//         {
//             break;
//         }
//         if(list1->val>list2->val)
//         {
            
//         }
//     }
//     }
      if(a==NULL&&b==NULL)
        return NULL;
      else if(a==NULL&&b!=NULL)
          return b;
      else if(a!=NULL&&b==NULL)
          return a;
    else{
        while(a->next!=NULL)
            a=a->next;
        a->next=b;
        while(c!=NULL){
            e=c->next;
            while(e!=NULL)
            {
                if(c->val>e->val){
                    int temp=c->val;
                c->val=e->val;
                e->val=temp;
                }
                e=e->next;
            }
            c=c->next;
        }
        return d;
    }
    

}