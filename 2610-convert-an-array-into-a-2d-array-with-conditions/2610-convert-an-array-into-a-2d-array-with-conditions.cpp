class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int,int> m;
        for(auto i:nums)
            m[i]++;
        vector<vector<int>> ans;
        for(auto j:m)
        {
            for(int i=0;i<j.second;i++)
            {
                if(i==ans.size())
                    ans.push_back({j.first});
                else
                    ans[i].push_back(j.first);
            }
        }
        return ans;
    }
};