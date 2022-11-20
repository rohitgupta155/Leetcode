class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size(),m=INT_MIN;
        for(int i=0;i<n/2;i++)
        {
            m=max(m,nums[i]+nums[n-i-1]);
        }
        return m;
    }
};