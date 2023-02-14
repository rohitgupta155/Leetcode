class Solution {
public:
    vector<vector<int>>c,t;
    int orangesRotting(vector<vector<int>>& g) {
        vector<vector<int>> a(g.size(),vector<int>(g[0].size(),0));
        c=a;        
        t=g;
        for(int i=0;i<g.size();i++)
        {
            for(int j=0;j<g[0].size();j++)
            {
                
                if(g[i][j]==2)
                {
                    if(i>0)
                        rot(i-1,j,1);
                    if(j>0)
                        rot(i,j-1,1);
                    if(i+1<g.size())
                        rot(i+1,j,1);
                    if(j+1<g[0].size())
                        rot(i,j+1,1);
                    
                }
            }
        }
        for(auto i:t)
            for(auto j:i)
                if(j==1)
                    return -1;
        int m=INT_MIN;
        for(auto i:c)
           {
            for(auto j:i){
                m=max(m,j);}
        }
        return m;
        
    }
    void rot(int i,int j,int co)
    {
        if(t[i][j]==0)
            return;
        if(t[i][j]==2)
            {
            if(c[i][j]<=co)
                return;
            else
            c[i][j]=co;
            }
        t[i][j]=2;
        c[i][j]=co;
        if(i>0)
            rot(i-1,j,co+1);
        if(j>0)
            rot(i,j-1,co+1);
        if(i+1<t.size())
            rot(i+1,j,co+1);
        if(j+1<t[0].size())
            rot(i,j+1,co+1);
    }
};