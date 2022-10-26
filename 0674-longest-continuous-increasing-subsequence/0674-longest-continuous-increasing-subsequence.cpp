class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int c=1,m=1;
        for(int i=1;i<nums.size();i++)
            {if(nums[i]>nums[i-1])
                c++;
        else {m=max(m,c);c=1;}}
        m=max(m,c);
        return m;
    }
};