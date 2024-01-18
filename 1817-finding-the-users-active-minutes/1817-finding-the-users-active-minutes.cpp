class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        unordered_map<int,unordered_set<int>> m;
        unordered_map<int,int> uam;
        for(auto i:logs)
        {
            m[i[0]].insert(i[1]);
        }
        for(auto i:m)
            uam[i.second.size()]++;
        vector<int> ans;
        for(int i=1;i<=k;i++)
            ans.push_back(uam[i]);
        return ans;
    }
};