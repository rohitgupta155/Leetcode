class Solution {
public:
    void duplicateZeros(vector<int>& a) {
        if(a.size()==1)
        return;
        int n=a.size();
        for(int i=0;i<n-1;i++)
        {
            if(a[i]==0)
            {
                for(int j=n-1;j>i;j--)
                {
                    a[j]=a[j-1];
                }
                a[i+1]=0;
                i++;
                    
            }
        }
    }
};