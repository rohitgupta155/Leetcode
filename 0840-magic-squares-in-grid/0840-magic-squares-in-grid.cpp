class Solution {
public:
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        if(grid.size()<3||grid[0].size()<3)
            return 0;
        int co=0;
        for(int r=0;r<grid.size()-2;r++)
        {
            for(int c=0;c<grid[0].size()-2;c++)
            {
               if(grid[r+1][c+1]!=5)
                   continue;
                if(check({grid[r][c], grid[r][c+1], grid[r][c+2],
                          grid[r+1][c], grid[r+1][c+1], grid[r+1][c+2],
                          grid[r+2][c], grid[r+2][c+1], grid[r+2][c+2]}))
                    co++;

            }
        }
        return co;
    }
    bool check(vector<int> vals)
    {
        vector<int> c(16,0);
        for(auto i:vals)
            c[i]++;
        for(int i=1;i<=9;i++)
            if(c[i]!=1)
                return false;
        return (vals[0] + vals[1] + vals[2] == 15 &&
                vals[3] + vals[4] + vals[5] == 15 &&
                vals[6] + vals[7] + vals[8] == 15 &&
                vals[0] + vals[3] + vals[6] == 15 &&
                vals[1] + vals[4] + vals[7] == 15 &&
                vals[2] + vals[5] + vals[8] == 15 &&
                vals[0] + vals[4] + vals[8] == 15 &&
                vals[2] + vals[4] + vals[6] == 15);
    }
};