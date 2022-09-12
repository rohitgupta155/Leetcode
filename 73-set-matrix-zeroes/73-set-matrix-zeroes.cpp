class Solution {
public:
    void setZeroes(vector<vector<int>>& a) {
        int m=a.size(),n=a[0].size();
        int r[m],c[n];
        memset(r,1,m*sizeof(int));
        memset(c,1,n*sizeof(int));
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(a[i][j]==0)
                {
                    r[i]=0;
                    c[j]=0;
                }
            }
        }
        for(int i=0;i<m;i++)
            if(r[i]==0)
            for(int j=0;j<n;j++)
                    a[i][j]=0;
        for(int i=0;i<n;i++)
            if(c[i]==0){
                for(int j=0;j<m;j++)
                    a[j][i]=0;
            }
        
    }
};