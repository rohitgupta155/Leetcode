class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<32;i++)
        {
            int o=0;
            for(int j=0;j<nums.size();j++)
            {
                if((nums[j]>>i)%2)
                    o++;
            }
            ans+=(o*(nums.size()-o));
        }
        return ans;
    }
};