class Solution {
public:
    int makeConnected(int n, vector<vector<int>>& connections) {
        if(connections.size()<n-1)
            return -1;
        unordered_map<int,vector<int>> m;
        for(auto i:connections){
            m[i[0]].push_back(i[1]); 
            m[i[1]].push_back(i[0]);}
        queue<int> q;
        vector<bool> vis(n,false);
        int ans=0;
        for(int i=0;i<n;i++)
        {
           if(!vis[i])
           {
               ans++;
               q.push(i);
               vis[i]=true;
               while(!q.empty())
               {
                   int node=q.front();
                   q.pop();
                   for(auto i:m[node])
                   {
                       if(!vis[i]){vis[i]=true;
                       q.push(i);}
                   }
               }
               
           }
            
        }
        return ans-1;

    }
};