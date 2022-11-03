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
vector<int> a;
        stack<int> s;
           
    vector<int> nextLargerNodes(ListNode* head) {
        solve(head);
        reverse(a.begin(),a.end());
        return a;
    }
    void solve(ListNode* head)
    {
        if(!head)
            return;
        solve(head->next);
        if(s.empty()){
            a.push_back(0);
            s.push(head->val);
            return;
        }
        while(!s.empty()&&head->val>=s.top())
            s.pop();
        if(!s.empty()&&s.top()>head->val)
            a.push_back(s.top());
        else a.push_back(0);
        s.push(head->val);
    }
};