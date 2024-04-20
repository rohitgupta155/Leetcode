class Solution {
public:
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        vector<vector<int>> ans;
        vector<int> r(land[0].size(),0);
        for(int i=0;i<land.size();i++)
        {
            for(int j=0;j<land[0].size();j++)
            {
                if(!land[i][j]&&r[j])
                {
                    int s=j;
                    vector<int> t;
                    t.push_back(i-r[j]);         
                    t.push_back(j);
                    while(s<land[0].size()&&r[s])
                    {
                        r[s]=0;
                        s++;
                    }
                    t.push_back(i-1);
                    t.push_back(s-1);          
                    ans.push_back(t);
                }
                else
                    r[j]+=land[i][j];
            }
        }
        for(int i=0;i<r.size();i++)
        {
            if(r[i])
            {
                vector<int> t;
                t.push_back(land.size()-r[i]);         
                t.push_back(i);
                while(i<r.size()&&r[i])
                    i++;
                
                t.push_back(land.size()-1);         
                t.push_back(i-1);
                ans.push_back(t);
            }
        }
        return ans;
    }
};