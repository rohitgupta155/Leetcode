class Solution {
public:
    int minMaxGame(vector<int>& nums) {
        if(nums.size()==1)
            return nums[0];
        if(nums.size()==2)
            return min(nums[0],nums[1]);
        int n=nums.size()/2-1;
        int m=nums.size();
        for(int i=0;i<n;i++)
        {
            int j=0;
            for(int k=0;k<m;k+=4)
            {
                nums[j]=min(nums[k],nums[k+1]);
                nums[j+1]=max(nums[k+2],nums[k+3]);
                j+=2;
            }
        }
        return min(nums[0],nums[1]);
    }
};