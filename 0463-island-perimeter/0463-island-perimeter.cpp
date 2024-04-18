class Solution {
public:
    
    int islandPerimeter(vector<vector<int>>& grid) {
        int ans=0;
        for(int i=0;i<grid.size();i++)
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j])
                {
                    ans+=4;
                    grid[i][j]=4;
                   if(i-1>=0&&grid[i-1][j])
                   {
                       ans-=2;
                       grid[i][j]--;
                       grid[i-1][j]--;
                   }
                    if(j-1>=0&&grid[i][j-1])
                    {
                       ans-=2;
                       grid[i][j]--;
                       grid[i][j-1]--;
                    }
                }
            }
        return ans;
    }
    
    void solve(vector<vector<int>>& grid,int i,int j,int &ans)
    {
        if(i>=0&&j>=0&&i<grid.size()&&j<grid[0].size()&&grid[i][j])
        {
            ans+=2;
            grid[i][j]=0;
            solve(grid,i,j-1,ans);  
            solve(grid,i,j+1,ans);
            solve(grid,i-1,j,ans);
            solve(grid,i+1,j,ans);
        }
    }
};