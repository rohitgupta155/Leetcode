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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector <int> v;
        ListNode * m=NULL;
        for(int i=0;i<lists.size();i++)
        {
            ListNode * a= lists[i];
            while(a!=NULL){
                v.push_back(a->val);
                a=a->next;}
        }
        sort(v.begin(),v.end());
        for(int i=v.size()-1;i>=0;i--)
        {
           ListNode * temp=new ListNode;
            temp->val=v[i];
            temp->next=m;
            m=temp;
        }
        return m;
    }
};