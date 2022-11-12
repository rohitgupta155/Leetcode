class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int d=INT_MIN,m=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(m>=nums[i])
            {
                m=nums[i];
            }
            else d=max(d,nums[i]-m);
            
        }
        return d==INT_MIN?0:d;
    }
};