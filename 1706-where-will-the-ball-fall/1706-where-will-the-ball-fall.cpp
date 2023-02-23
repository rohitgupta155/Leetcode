class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
        vector<int> ans;
        for(int i=0;i<grid[0].size();i++)
        {
            int j=i,s=0;
            while(j<grid[0].size()&&s<grid.size())
            {
                if(grid[s][j]==1)
                {
                    if(j==grid[0].size()-1||grid[s][j+1]==-1)
                        {ans.push_back(-1);
                        break;}
                    else j++,s++;
                }
                else{
                    if(j==0||grid[s][j-1]==1)
                        {ans.push_back(-1);
                         break;}
                    else j--,s++;
                }
            }
            if(s==grid.size())
                ans.push_back(j);
        }
        return ans;
    }
};