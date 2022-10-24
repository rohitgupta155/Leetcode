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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode *t=list1;
        int c=0,d=1;
        while(c<a-1)
        {
            t=t->next;
            c++;
        }
        ListNode* f=t;
        while(c<b)
        {
            t=t->next;
            c++;
        }
        ListNode* e=t->next;
        f->next=list2;
        while(list2->next)
            list2=list2->next;
        list2->next=e;
        return list1;
    }
};