class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1)
            return 0;
        int r=0,l=0,p=1,ans=0;
        for(;r<nums.size();r++)
        {
            p*=nums[r];
            while(p>=k){
                p/=nums[l++];
            }
            ans+=r-l+1;
        }
        return ans;
    }
};