class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(nums.size()==1)
            return nums[0]==target?0:-1;
        int l=0,r=nums.size()-1,mid;
        while(l<=r)
        {
            mid=l+(r-l)/2;
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]>target)
                r=mid-1;
            else l=mid+1;
        }
        return -1;
    }
};