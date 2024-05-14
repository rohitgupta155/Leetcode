class Solution {
public:
    int ans=0;
    int getMaximumGold(vector<vector<int>>& grid) {
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j])
                {
                    ans=max(ans,grid[i][j]);
                    int val=grid[i][j];
                    grid[i][j]=0;
                    if(i+1<grid.size())
                    seek(val,i+1,j,grid);
                    if(j+1<grid[0].size())
                    seek(val,i,j+1,grid);
                    if(j-1>=0)
                    seek(val,i,j-1,grid);
                    if(i-1>=0)
                    seek(val,i-1,j,grid);
                    grid[i][j]=val;
                    cout<<endl;
                }
            }
        }
        return ans;
    }
    void seek(int coins,int i,int j,vector<vector<int>>& m)
    {
        if(!m[i][j])
        {
            return;
        }
        int val=m[i][j];
        m[i][j]=0;
        ans=max(ans,coins+val);
        if(i+1<m.size())
            seek(val+coins,i+1,j,m);
        if(j+1<m[0].size())
            seek(val+coins,i,j+1,m);
        if(j-1>=0)
            seek(val+coins,i,j-1,m);
        if(i-1>=0)
            seek(val+coins,i-1,j,m);
        m[i][j]=val;
    }
};