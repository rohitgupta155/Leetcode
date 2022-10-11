class Solution {
public:
    int countGoodTriplets(vector<int>& nums, int a, int b, int c) {
        int d=0,n=nums.size();
        for(int k=n-1;k>=0;k--)
            for(int j=k-1;j>=0;j--)
                for(int i=j-1;i>=0;i--)
                    if(abs(nums[k]-nums[i])<=c&&abs(nums[k]-nums[j])<=b&&abs(nums[i]-nums[j])<=a)
                        d++;
            return d;
    }
};