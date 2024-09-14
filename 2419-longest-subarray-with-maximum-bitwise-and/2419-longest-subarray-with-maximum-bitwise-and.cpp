class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int m=*max_element(nums.begin(),nums.end());
        int c=0,ans=0;
        for(auto i:nums)
        {
            if(i==m)
                c++;
            else{
                ans=max(ans,c);
                c=0;
            }
        }
        ans=max(ans,c);
        return ans;
    }
};