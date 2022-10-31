class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& ma) {
        int n=ma.size(),m=ma[0].size();
        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<m-1;j++)
            {
                if(ma[i][j]!=ma[i+1][j+1])
                    return false;
            }
        }
        return true;
    }
};