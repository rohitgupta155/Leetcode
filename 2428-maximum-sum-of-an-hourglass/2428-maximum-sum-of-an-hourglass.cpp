class Solution {
public:
    int maxSum(vector<vector<int>>& g) {
        int m=INT_MIN;
        for(int i=0;i<g.size()-2;i++)
        {
            for(int j=0;j<g[0].size()-2;j++)
            {
                int s=g[i][j]+g[i][j+1]+g[i][j+2]+g[i+1][j+1]+g[i+2][j]+g[i+2][j+1]+g[i+2][j+2];
                m=max(s,m);
            }
        }
        return m;
    }
};