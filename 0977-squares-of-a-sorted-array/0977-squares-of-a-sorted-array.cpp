class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
            nums[i]=nums[i]*nums[i];
        vector<int> ans(nums.size());
        int i=nums.size()-1;
        int l=0,r=i;
        while(l<=r)
        {
            if(nums[l]<=nums[r])
            {
                ans[i--]=nums[r--];
            }
            else
                ans[i--]=nums[l++];
        }
        return ans;
    }
};