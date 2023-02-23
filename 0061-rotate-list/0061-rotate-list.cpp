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
    ListNode* ans,*end;
    int c=0;
    ListNode* rotateRight(ListNode* head, int k) {
         ListNode *start=head;
        int s=count(head);
        if(k==0||s==0||k%s==0)
            return head;
        find(head,k%s);
        while(head->next!=NULL)
            head=head->next;
        head->next=start;
        cout<<end->val;
        end->next=NULL;
        return ans;
    }
    void find(ListNode *h,int k)
    {
        if(!h)
            return;
        find(h->next,k);
        c++;
        if(c==(k+1))
            end=h;
        if(c==k)
            ans=h;
    }   
     int count(ListNode* head)
    {
        int c=0;
        while(head!=NULL)
        {
            c++;
            head=head->next;
        }
        return c;
    }
};