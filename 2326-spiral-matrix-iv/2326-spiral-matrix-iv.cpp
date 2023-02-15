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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>>ans(m,vector<int>(n,-1));
       int i=0,j=0,r=0,c=1;
        while(head)
        {
            if(ans[i][j]!=-1)
            {
                i-=r;
                j-=c;
                change(r,c);
                i+=r;
                j+=c;
            }
            ans[i][j]=head->val;
            head=head->next;
            i+=r,j+=c;
            if(i==m||j==n||i<0||j<0)
            {
                
                if(i==m)
                    i--;
                if(j==n)
                    j--;
                if(i<0)
                    i++;
                if(j<0)
                    j++;
                change(r,c);
                i+=r;
                j+=c;
            }
        }
        return ans;
        
    }
    
    void change(int &i,int &j)
    {
        if(i==0&&j==1)
        {
            i=1;
            j=0;
        }
        else if(i==1&&j==0)
        {
            i=0;
            j=-1;
        }
        else if(i==0&&j==-1)
        {
            i=-1;
            j=0;
        }
        else{
            i=0;
            j=1;
        }
    }
};