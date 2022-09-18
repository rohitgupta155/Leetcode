class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
       unordered_map<int,int> a;
        for(auto i:nums)
            for(auto j:i)
                a[j]++;
        vector<int> ans;
        int n=nums.size();
        for(auto i:a)
            if(i.second==n)
                ans.push_back(i.first);
        sort(ans.begin(),ans.end());
        return ans;
    }
};