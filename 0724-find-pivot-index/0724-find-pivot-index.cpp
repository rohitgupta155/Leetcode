class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size(),sum=0,l=0,r=0;
        for(int i=0;i<n;i++)
            sum+=nums[i];
        l=sum-nums[0];
        int i=1;
        for(i=1;i<n;i++)
        { if(l==r)
                return i-1;
            l=l-nums[i];
            r=r+nums[i-1];
           
        }
        if(l==r)
            return i-1;
        return -1;

    }
};