class Solution {
public:
    int numOfMinutes(int n, int headID, vector<int>& m, vector<int>& it) {
        int t=0;
        for(int i=0;i<n;i++)
        {
            if(it[i]==0)
            {int j=i,sum=0;
            while(m[j]!=-1)
            {
                
                sum+=it[j],j=m[j];
            }
            sum+=it[headID];
             t=max(t,sum);
            }
        }
        return t;
    }
};