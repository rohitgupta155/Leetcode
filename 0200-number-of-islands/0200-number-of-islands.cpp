class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int ans=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]=='1')
                {
                    fill(grid,i,j);
                    ans++;
                }
            }
        }
        return ans;
    }
    void fill(vector<vector<char>>& grid,int i,int j)
    {
        if(grid[i][j]=='1')
        {
            grid[i][j]='0';
            if(i>0)
                fill(grid,i-1,j);
            if(j>0)
                fill(grid,i,j-1);
            if(i+1<grid.size())
                fill(grid,i+1,j);
            if(j+1<grid[0].size())
                fill(grid,i,j+1);
        }
    }
};