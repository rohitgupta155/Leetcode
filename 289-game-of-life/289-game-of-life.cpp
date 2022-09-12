class Solution {
public:
    bool check(vector<vector<int>> &b,int i,int j,int n,int m)
    {
        int a=0;
        if((i-1)>=0&&(j-1)>=0&&b[i-1][j-1]==1)
            a++;
        if((i-1)>=0&&b[i-1][j]==1)
            a++;
        if((i-1)>=0&&(j+1)<m&&b[i-1][j+1]==1)
            a++;
        if((j-1)>=0&&b[i][j-1]==1)
            a++;
        if((j+1)<m&&b[i][j+1]==1)
            a++;
        if((i+1)<n&&(j-1)>=0&&b[i+1][j-1]==1)
            a++;
        if((i+1)<n&&b[i+1][j]==1)
            a++;
         if((i+1)<n&&(j+1)<m&&b[i+1][j+1]==1)
            a++;
        if(b[i][j]==0)
        {
            if(a==3)
                return true;
            return false;
        }
        if(a<2||a>3)
            return false;
            return true;
    }
    void gameOfLife(vector<vector<int>>& b) {
        int n=b.size(),m=b[0].size();
        queue<int> q;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(check(b,i,j,n,m))
                    q.push(1);
                else q.push(0);
                    
            }
        }
        int i=0,j=0;
        while(!q.empty())
        {
             if(j==m)
            {
                i++;
                j=0;
            }
            else{
            b[i][j]=q.front();
            j++;
            q.pop();
            }
           
        }
    }
};