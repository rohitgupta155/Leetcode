class Solution {
public:
    vector<vector<int>> ans;
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
       vector<bool> vis(graph.size(),false);
        vis[0]=true;
       vector<int> t={0};
       for(auto i:graph[0])
       { 
         t.push_back(i);
           vis[i]=true;
        find(i,graph.size()-1,graph,t,vis);
           vis[i]=false;
           t.pop_back();
       }
        return ans;
    }
    void find(int s,int d,vector<vector<int>>& graph,vector<int> t,vector<bool> vis)
    {
        if(s==d){
            ans.push_back(t);
            return;}
        for(auto i:graph[s])
         {  
           if(!vis[i]){
            t.push_back(i);
            vis[i]=true;
            find(i,d,graph,t,vis);
            t.pop_back();
            vis[i]=false;}
         }
    }
};