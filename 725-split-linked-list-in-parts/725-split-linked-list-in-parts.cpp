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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*>a(k);
        int n=count(head);
        int o,e=0;
        if(n>k){
            o=n/k;
        e=n%k;}
        else{
            o=1;
        }
        int i=0;
        while(head!=NULL)
        {
            int c=o;
            if(e)
            {
                c++;
                e--;
            }
            a[i++]=head;
            ListNode *temp=a[i-1];
            while(c>1)
            {
                c--;
                temp=temp->next;
                head=head->next;
            }
            
                head=head->next;
            temp->next=NULL;
        }
        return a;
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