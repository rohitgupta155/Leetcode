class Solution {
public:
    int minPathCost(vector<vector<int>>& grid, vector<vector<int>>& moveCost) {
        vector<vector<int>> ans=grid;
        for(int i=1;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                int minimum=INT_MAX;
                for(int k=0;k<grid[0].size();k++)
                {
                    minimum=min(minimum,ans[i-1][k]+moveCost[grid[i-1][k]][j]);
                    
                }
                ans[i][j]+=minimum;

            }
        }
        return *min_element(ans.back().begin(),ans.back().end());
    }
};