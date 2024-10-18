class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {
        int n=nums.size(),ans=0,m=0;
        for(auto i:nums)
            m|=i;
        for (int i = 0; i < (1 << n); i++) {
            int curr=0;
        for (int j = 0; j < n; j++) {
            if ((i & (1 << j)) != 0) {
                curr|=nums[j];
            }
        }
            if(curr==m)
                ans++;
    }
        return ans;
    }
};