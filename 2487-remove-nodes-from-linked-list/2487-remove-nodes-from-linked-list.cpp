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
    ListNode *currmax;
    ListNode* removeNodes(ListNode* head) {
        solve(head);
        return currmax;
    }
    void solve(ListNode* head)
    {
        if(!head->next)
        {
            currmax=head;
            return;
        }
        solve(head->next);
        if(head->val>=currmax->val)
        {
            head->next=currmax;
            currmax=head;
        }
    }
};