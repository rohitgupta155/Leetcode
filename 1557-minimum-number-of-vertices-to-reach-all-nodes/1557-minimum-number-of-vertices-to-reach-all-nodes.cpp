class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
         unordered_map<int,vector<int>> m;
        for(auto i:edges)
        {
            m[i[1]].push_back(i[0]);            
        }
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            if(!m.count(i))
                ans.push_back(i);
        }
        return ans;
    }
};