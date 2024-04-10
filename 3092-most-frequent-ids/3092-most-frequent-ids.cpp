class Solution {
public:
    vector<long long> mostFrequentIDs(vector<int>& nums, vector<int>& freq) {
        set<pair<long long,int>> s;
        unordered_map<int,long long> m;
        vector<long long> ans;
        for(int i=0;i<nums.size();i++){
            s.erase({m[nums[i]],nums[i]});
            m[nums[i]]+=freq[i];
            s.insert({m[nums[i]],nums[i]});
            ans.push_back(s.rbegin()->first);
        }
        return ans;
    }
};