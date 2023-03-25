class Solution {
public:
    int findCircleNum(vector<vector<int>>& n) {
        int c=n.size();
        vector<vector<int>> m(n.size());
        for(int i=0;i<n.size();i++)
            for(int j=0;j<n.size();j++)
            {
                if(i!=j&&n[i][j])
                {
                    m[i].push_back(j);
                    m[j].push_back(i);
                }
            }
        vector<bool> vis(c,false);
        int ans=0;
        for(int i=0;i<c;i++)
        {
            if(!vis[i]){
            queue<int> q;
            q.push(i);
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
                }
                    
            }
            }
            ans++;}
        }
        return ans;
    }
};