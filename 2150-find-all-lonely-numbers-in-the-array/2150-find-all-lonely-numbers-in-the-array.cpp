class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        unordered_map<int,int> m;
        vector<int> ans;
        for(auto i:nums)
            m[i]++;
        for(auto i:m)
        {
            if(i.second==1&&!m.count(i.first+1)&&!m.count(i.first-1))
                ans.push_back(i.first);
                
        }
        return ans;
    }
};