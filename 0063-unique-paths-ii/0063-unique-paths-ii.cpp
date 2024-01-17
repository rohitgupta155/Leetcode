class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& g) {
        if(g.back().back()==1)
            return 0;
        int m=g.size(),n=g[0].size();
        vector<vector<int>> a(m,vector<int>(n,0));
        for(int i=0;i<m;i++)
            if(g[i][0]!=1)
            a[i][0]=1;
            else break;
        for(int i=0;i<n;i++)
            if(g[0][i]!=1)
            a[0][i]=1;
            else break;
        
        for(int i=1;i<m;i++)
            for(int j=1;j<n;j++)
           { 
                if(g[i-1][j]!=1)
                a[i][j]+=a[i-1][j];
                if(g[i][j-1]!=1)
                a[i][j]+=a[i][j-1];
            }
        return a[m-1][n-1];
    }
};