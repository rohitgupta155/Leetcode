class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int ans=0,sum=0,j=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            while(j<=i&&sum>goal)
                sum-=nums[j++];
            ans+=i-j+1;
        }
        goal--;
         sum=0,j=0;
        int na=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            while(j<=i&&sum>goal)
                sum-=nums[j++];
            na+=i-j+1;
        }
        return ans-na;
        
    }
};