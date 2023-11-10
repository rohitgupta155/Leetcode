class Solution {
public:
    vector<int> ans;
    unordered_set<int> vis;
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
        unordered_map<int,vector<int>> m;
        for(auto i:adjacentPairs)
        {
            m[i[0]].push_back(i[1]);
            m[i[1]].push_back(i[0]);
        }
        int start;
        for(auto i:m)
        {
           if(i.second.size()==1)
           {start=i.first;
                break;}
        }
        find(start,m);
        return ans;
        
    }
    void find(int s,unordered_map<int,vector<int>> &m){
        if(ans.size()==m.size())
        {
            return;
        }
        vis.insert(s);
        ans.push_back(s);
        for(auto i:m[s])
        {
            if(vis.find(i)==vis.end())
            find(i,m);
        }
    }
};