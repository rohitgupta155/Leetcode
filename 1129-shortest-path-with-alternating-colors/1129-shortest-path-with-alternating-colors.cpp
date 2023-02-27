class Solution {
public:
    vector<vector<pair<int,int>>> m;
    vector<int> ans;
    vector<vector<bool>>v;
    vector<int> shortestAlternatingPaths(int n, vector<vector<int>>& redEdges, vector<vector<int>>& blueEdges) {
           ans.resize(n,-1);
            v.resize(n,vector<bool>(2));
        m.resize(n);
        v[0][1]=v[0][0]=true;
        ans[0]=0;
        for(auto i:redEdges)
        {
            m[i[0]].push_back({i[1],0});
        }
        for(auto i:blueEdges)
        {
            m[i[0]].push_back({i[1],1});
        }
        queue<vector<int>> q;
        q.push({0,-1,0});
        while(!q.empty())
        {
            auto i=q.front();
            q.pop();
            for(auto j:m[i[0]])
            {
                if(!v[j.first][j.second]&&i[1]!=j.second)
                {
                    v[j.first][j.second]=true;
                    q.push({j.first,j.second,i[2]+1});
                    if(ans[j.first]==-1)
                        ans[j.first]=i[2]+1;
                }
            }
        }
        return ans;
        }

};