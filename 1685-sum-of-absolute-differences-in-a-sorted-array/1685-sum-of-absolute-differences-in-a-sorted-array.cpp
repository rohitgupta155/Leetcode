class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int sum=accumulate(nums.begin(),nums.end(),0);
        vector<int> ans;
        int n=nums.size(),l=0,c=0;
        for(auto i:nums)
        {
            ans.push_back(c*i-l+(sum-l-i)-(n-c-1)*i);
            l+=i;
            c++;
        }
        return ans;
    }
};