class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int sum=accumulate(nums.begin(),nums.end(),0);
        int n=nums.size(),l=0,c=0;
        for(auto i:nums)
        {
            nums[c]=(c*i-l+(sum-l-i)-(n-c-1)*i);
            l+=i;
            c++;
        }
        return nums;
    }
};