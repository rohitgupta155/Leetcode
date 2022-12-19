class Solution {
public:
    int minOperations(vector<int>& nums) {
        int c=0;
        for(int i=1;i<nums.size();i++)
        {
            int a=nums[i];
            nums[i]=max(nums[i-1]+1,nums[i]);
            if(a!=nums[i])
                c+=(nums[i]-a);
        }
        return c;
    }
};