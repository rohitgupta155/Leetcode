class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        vector<int> c(graph.size(),0);
        queue<int> q;
        for(int i=0;i<graph.size();i++)
        {
            if(c[i])
                continue;
            c[i]=1;
            q.push(i);
            while(!q.empty())
            {
                int curr=q.front();
                for(auto j:graph[curr])
            {
                if(!c[j])
                {
                    c[j]=-c[curr];
                    q.push(j);
                }
                else if(c[j]==c[curr])
                    return false;
            }
            q.pop();}
        }
        return true;
    }
};