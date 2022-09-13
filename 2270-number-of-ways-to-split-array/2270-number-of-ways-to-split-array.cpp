class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long sum=0,l=0;
        int c=0;
        for(auto i:nums)
            sum+=i;
        for(int i=0;i<nums.size()-1;i++)
        {
            l+=nums[i];
            if((sum-l)<=l)
                c++;
            
        }
        return c;
    }
};