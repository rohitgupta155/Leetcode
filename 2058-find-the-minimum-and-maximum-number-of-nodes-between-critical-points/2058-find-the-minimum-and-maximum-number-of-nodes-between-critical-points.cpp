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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        if(!head->next||!head->next->next)
            return {-1,-1};
        int i=0;
        vector<int> vals;
        ListNode *p=head;
        head=head->next;
        while(head&&head->next)
        {
            if(head->val>p->val&&head->val>head->next->val||head->val<p->val&&head->val<head->next->val){
                vals.push_back(i);
            }
            p=head;
            head=head->next;
            i++;
        }
        if(vals.size()<2)
            return {-1,-1};
        vector<int> ans;
        int m=INT_MAX;
        for(int i=1;i<vals.size();i++)
            m=min(m,vals[i]-vals[i-1]);
        ans.push_back(m);
        ans.push_back(vals.back()-vals[0]);
        return ans;
        
        
    }
};