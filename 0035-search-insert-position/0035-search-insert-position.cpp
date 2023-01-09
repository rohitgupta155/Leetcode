class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(target>nums.back())
            return nums.size();
        int l=0,r=nums.size()-1;
        while(l<r)
        {
            int m=(l+r)/2;
            if(nums[m]>=target)
                r=m;
            else l=m+1;
        }
        return l; 
    }
};