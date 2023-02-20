class Solution {
public:
    int smallestRangeII(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int ans=nums.back()-nums[0];
        for(int i=0;i<nums.size()-1;i++)
        {
            int a=nums[i],b=nums[i+1];
            int high=max(nums.back()-k,a+k),low=min(nums[0]+k,b-k);
            ans=min(ans,high-low);
        }
        return ans;
    }
};