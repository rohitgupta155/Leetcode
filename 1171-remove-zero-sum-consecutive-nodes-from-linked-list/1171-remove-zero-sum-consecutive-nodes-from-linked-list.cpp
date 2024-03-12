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
    ListNode* removeZeroSumSublists(ListNode* head) {
        ListNode *start=new ListNode(0,head);
        ListNode* curr=start;
        unordered_map<int,ListNode*> m;
        int p=0;
        while(curr){
            p+=curr->val;
            m[p]=curr;
            curr=curr->next;
        }
        p=0;
        curr=start;
        
        while(curr){
            p+=curr->val;
            curr->next=m[p]->next;
            curr=curr->next;
        }
        return start->next;
    }
};