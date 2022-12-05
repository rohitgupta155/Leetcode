class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& m) {
        vector<int> r(m.size(),INT_MAX),c(m[0].size(),0);
        for(int i=0;i<m.size();i++)
        {
            for(int j=0;j<m[0].size();j++)
            {
                r[i]=min(r[i],m[i][j]);        
                c[j]=max(c[j],m[i][j]);
            }
        }
        vector<int> ans;
        for(int i=0;i<m.size();i++)
        {
            for(int j=0;j<m[0].size();j++)
            {
                if(m[i][j]==r[i]&&m[i][j]==c[j])
                    ans.push_back(m[i][j]);
            }
        }
        return ans;
    }
};