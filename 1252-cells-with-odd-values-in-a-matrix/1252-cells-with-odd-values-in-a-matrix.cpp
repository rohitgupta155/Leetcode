class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<vector<int>> a(m,vector<int>(n,0));
        for(auto i:indices)
        {
            for(int j=0;j<n;j++)
            {
                a[i[0]][j]++;
            }
            for(int j=0;j<m;j++)
            {
                a[j][i[1]]++;
            }
        }
        int c=0;
        for(auto i:a)
        {
            for(auto j:i)
                if(j%2)
                    c++;
        }
        return c;
    }
};