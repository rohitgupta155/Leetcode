class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        vector<int> r(grid.size(),0),c(grid[0].size(),0);
        for(int i=0;i<grid.size();i++)
            for(int j=0;j<grid[0].size();j++)
            {
                r[i]+=grid[i][j];
                c[j]+=grid[i][j];
            }
        int ans=0;
        for(int i=0;i<grid.size();i++)
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==0)
                    continue;
                if(r[i]>1||c[j]>1)
                    ans++;
            }
        return ans;
        
    }
};