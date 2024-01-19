class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& m) {
         int o=m[0].size(),n=m.size();
        vector<vector<int>> ans=m;
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<o;j++)
            {
                for(int k=0;k<o;k++)
                {
                    if(j!=k)
                    {
                        if(ans[i][j]==m[i][j])
                        {
                            ans[i][j]+=ans[i-1][k];
                        }
                        else{
                            ans[i][j]=min(ans[i][j],m[i][j]+ans[i-1][k]);
                        }
                    }
                }
            }
            
        }
        // for(auto i:m)
        // {
        //     for(auto j:i)
        //         cout<<j<<" ";
        //     cout<<endl;
        // }
        // cout<<endl;
        // for(auto i:ans)
        // {
        //     for(auto j:i)
        //         cout<<j<<" ";
        //     cout<<endl;
        // }
        return *min_element(ans.back().begin(),ans.back().end());
    }
};