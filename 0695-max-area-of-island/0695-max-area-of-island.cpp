class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int a=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j])
                    a=max(a,check(grid,i,j));
            }
        }
        return a;
    }
    int check(vector<vector<int>>& grid,int i,int j)
    {
        if((i<0|| i>=grid.size())||(j<0||j>=grid[0].size())||grid[i][j]==0)
            return 0;
        grid[i][j]=0;
        return 1+check(grid,i-1,j)+check(grid,i,j-1)+check(grid,i,j+1)+check(grid,i+1,j);
    }
};