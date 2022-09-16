class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        if(nums.size()<3)
            return true;
        int n=nums.size(),c=0;
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]<=nums[i+1])
                c++;
                if(c==(n-1))
                    return true;
        }
        c=0;
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]>=nums[i+1])
                c++;
                if(c==(n-1))
                    return true;
        }
        return false;
    }
};