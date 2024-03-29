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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedListToBST(ListNode* head) {
        if(!head)
            return NULL;
        if(!head->next)
        {
            return new TreeNode(head->val);
        }
    ListNode * mid=findmid(head);
    TreeNode *root=new TreeNode(mid->val);
    root->left=sortedListToBST(head);
    root->right=sortedListToBST(mid->next);
    return root;
    }
    ListNode* findmid(ListNode* head)
    {
        ListNode *slow=head,*prev=nullptr;
        while(head&&head->next)
        {
            prev=slow;
            slow=slow==nullptr?head:slow->next;
            head=head->next->next;
        }
        prev->next=nullptr;
        return slow;
    }
};