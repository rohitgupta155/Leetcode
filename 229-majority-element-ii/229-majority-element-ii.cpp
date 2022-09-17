class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
      unordered_map<int,int> ans;
        vector<int> a;
        int n=floor(nums.size()/3);
        for(auto i:nums)
            ans[i]++;
        for(auto i:ans)
        if(i.second>n)
            a.push_back(i.first);
        return a;
    }
};