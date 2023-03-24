class Solution {
public:
    int c=0;
    unordered_map<int,vector<pair<int,int>>> m;
    void dfs(int beta,int baap)
    {
        for(auto i:m[beta])
        {
            if(i.first!=baap)
            {
                c+=i.second;
                dfs(i.first,beta);
            }
        }
    }
    int minReorder(int n, vector<vector<int>>& connections) {    
        for(auto i:connections)
            {m[i[0]].push_back({i[1],1});
             m[i[1]].push_back({i[0],0});
            }
        dfs(0,-1);
        return c;
    }
};