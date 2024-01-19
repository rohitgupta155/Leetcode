class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& m) {
        int o=m[0].size(),n=m.size();
        vector<vector<int>> ans=m;
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<o;j++)
            {
                ans[i][j]=m[i][j]+ans[i-1][j];
                if(j>0)
                    ans[i][j]=min(ans[i][j],m[i][j]+ans[i-1][j-1]);
                if(j<o-1)
                    ans[i][j]=min(ans[i][j],m[i][j]+ans[i-1][j+1]);                    
            }
            
        }
        return *min_element(ans.back().begin(),ans.back().end());
    }
};