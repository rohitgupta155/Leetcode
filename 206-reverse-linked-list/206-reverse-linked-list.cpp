class Solution {
public:
    ListNode* start;
    ListNode* reverseList(ListNode* head) {
    //      stack<int> s;
    //     ListNode *temp=head,*n=head;
    // while(temp!=NULL)
    // {
    //     s.push(temp->val);
    //     temp=temp->next;
    // }
    // while(head!=NULL)
    // {
    //     head->val=s.top();
    //     s.pop();
    //     head=head->next;
    // }
    // return n;
        solve(head,NULL);
        return start;
    }
    void solve(ListNode* head,ListNode* prev)
    {
        if(head==NULL){
            start=prev;
            return;
        }
        solve(head->next,head);
        head->next=prev;
    }
};