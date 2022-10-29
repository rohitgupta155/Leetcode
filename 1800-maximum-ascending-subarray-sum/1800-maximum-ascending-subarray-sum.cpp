class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int sum=0,t=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]>nums[i-1])
                t+=nums[i];
            else{
                sum=max(t,sum);
                t=nums[i];
            }
        }
        sum=max(t,sum);
        return sum;
    }
};