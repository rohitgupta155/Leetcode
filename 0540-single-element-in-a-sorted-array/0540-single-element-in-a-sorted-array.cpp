class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        if(nums.size()==1)
            return nums.back();
        if(nums[0]!=nums[1])
            return nums[0];
        if(nums.back()!=nums[nums.size()-2])
            return nums.back();
        int l=0,r=nums.size()-1;
        while(l<=r)
        {
            int m=(r-l)/2+l;
            if(nums[m]!=nums[m+1]&&nums[m]!=nums[m-1])
                return nums[m];
            if(nums[m]==nums[m+1]&&m%2==0||nums[m]==nums[m-1]&&m%2)
              { l=m+1;
               }
            else{
                r=m-1;
            }
        }
        return nums[l];
    }
};