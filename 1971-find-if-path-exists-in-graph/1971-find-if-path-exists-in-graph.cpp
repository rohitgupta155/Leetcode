class Solution {
public:
   bool f=false;
    unordered_map<int,vector<int>> m;
    unordered_set<int> v;
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        if(source==destination)
            return true;
        v.insert(source);
        for(auto i:edges)
        {
            m[i[0]].push_back(i[1]);            
            m[i[1]].push_back(i[0]);            
        }
        // cout<<source<<"->";
        for(auto i:m[source])
       {
            if(!f&&v.find(i)==v.end())
       {
           // cout<<i<<"->";
           v.insert(i);
           find(i,destination);
       }
         else break;}
        return f;
    }
    void find(int s,int d)
    {
        if(s==d){
            f=true;
            return;}
        for(auto i:m[s])
         {  
            if(v.find(i)==v.end()){
             // cout<<i<<"->";
             v.insert(i); 
             find(i,d);
         }
          }
    }
};