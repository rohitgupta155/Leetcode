class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val=node->next->val;
        ListNode * temp=node->next->next;
        delete node->next;
        node->next=temp;
    }
};