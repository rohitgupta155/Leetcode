class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            for(int j=1;j<nums.size()-i;j++)
            {
                nums[j-1]=(nums[j-1]+nums[j])%10;
            }
        }
        return nums[0];
    }
};