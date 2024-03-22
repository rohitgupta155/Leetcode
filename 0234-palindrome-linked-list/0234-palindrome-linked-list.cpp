class Solution {
public:
    bool isPalindrome(ListNode* head) {
         stack<int> s;
        ListNode *temp=head;
    while(temp!=NULL)
    {
        s.push(temp->val);
        temp=temp->next;
    }
    while(head!=NULL)
    {
        if(s.top()!=head->val)
            return false;
            s.pop();
        head=head->next;
    }
    return true;
    }
};