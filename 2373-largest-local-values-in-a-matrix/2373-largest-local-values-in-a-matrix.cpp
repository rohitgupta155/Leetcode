class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<vector<int>> a(n-2,vector<int>(n-2));
        for(int i=0;i<n-2;i++)
            for(int j=0;j<n-2;j++)
                for(int k=0;k<3;k++)
                    for(int l=0;l<3;l++)
                    a[i][j]=max(a[i][j],grid[i+k][j+l]);
        return a;
    }
};