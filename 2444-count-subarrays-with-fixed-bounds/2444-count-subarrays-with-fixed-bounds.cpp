class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        int mi=-1,ma=-1,lb=-1;
        long long sum=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<minK||nums[i]>maxK)
                lb=i;
            if(nums[i]==maxK)
                ma=i;
            if(nums[i]==minK)
                mi=i;
            sum+=max(0,min(ma,mi)-lb);
        }
        return sum;
    }
};