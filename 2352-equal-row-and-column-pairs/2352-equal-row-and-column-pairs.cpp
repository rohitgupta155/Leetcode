class Solution {
public:
    int equalPairs(vector<vector<int>>& g) {
        int n=g.size();
        vector<vector<int>>r(n),c(n);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                r[i].push_back(g[i][j]);
                c[i].push_back(g[j][i]);
            }
        }
        int count=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(r[i]==c[j])
                    count++;
            }
        }
        return count;
    }
};