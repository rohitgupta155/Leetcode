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
    int numComponents(ListNode* head, vector<int>& nums) {
        unordered_set<int> s(nums.begin(),nums.end());
        int c=0,t=0;
        while(head)
        {
            if(s.find(head->val)!=s.end())
                t++;
            else if(t)c++,t=0;
            head=head->next;
        }
        if(t)c++;
        return c;
    }
};