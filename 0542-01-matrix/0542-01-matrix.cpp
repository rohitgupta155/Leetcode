class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        vector<vector<int>> a(mat.size(),vector<int>(mat[0].size(),100000000));
        for(int i=0;i<mat.size();i++)
            for(int j=0;j<mat[0].size();j++)
                if(mat[i][j]==0)
                    a[i][j]=0;
                else{
                    if(i>0)
                        a[i][j]=min(a[i][j],a[i-1][j]+1);
                    if(j>0)
                        a[i][j]=min(a[i][j],a[i][j-1]+1);
                }
        
        for(int i=mat.size()-1;i>=0;i--)
            for(int j=mat[0].size()-1;j>=0;j--)
                {
                    if(i<mat.size()-1)
                        a[i][j]=min(a[i][j],a[i+1][j]+1);
                    if(j<mat[0].size()-1)
                        a[i][j]=min(a[i][j],a[i][j+1]+1);
                }
        return a;
        
    }
};