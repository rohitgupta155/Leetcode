class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int i:nums)
            m[i]++;
        nums.clear();
        for(auto i:m)
        {
            nums.push_back(i.first);
        }
        sort(nums.begin(),nums.end());
        int s=0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]-nums[i-1]==1)
                s=max(s,m[nums[i]]+m[nums[i-1]]);
        }
        return s;
    }
};