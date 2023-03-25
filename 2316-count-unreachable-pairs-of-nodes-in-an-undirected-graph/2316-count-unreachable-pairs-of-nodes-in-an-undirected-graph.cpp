class Solution {
public:
    long long countPairs(int n, vector<vector<int>>& edges) {
        unordered_map<int,vector<int>> m;
        for(auto i:edges)
        {
            m[i[0]].push_back(i[1]); 
            m[i[1]].push_back(i[0]);
        }
        vector<bool> vis(n,false);
        long long ans=0,total=n;
        for(int i=0;i<n;i++)
        {
           if(!vis[i]){ queue<int> q;
            q.push(i);
            long long c=1;
            vis[i]=true;
            while(!q.empty())
            {
                int node=q.front();
                q.pop();
                for(auto j:m[node])
                {
                    if(!vis[j])
                    {
                        vis[j]=true;
                        q.push(j);
                        c++;
                    }
                }
            }
            ans+=c*(total-c);
            total-=c;
        }}
        return ans;
    }
};