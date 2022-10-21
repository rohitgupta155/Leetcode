class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        unordered_map<int,vector<int>> m;
        vector<vector<int>> ans;
        for(int i=0;i<groupSizes.size();i++)
           { m[groupSizes[i]].push_back(i);
            if(m[groupSizes[i]].size()==groupSizes[i])
                {ans.push_back(m[groupSizes[i]]);
                m.erase(groupSizes[i]);}}
        for(auto i:m)
            ans.push_back(i.second);
        return ans;
    }
};