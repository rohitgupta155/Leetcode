class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long ans=0;
        long long z=0;
        for(auto i:nums)
        {
            if(i!=0&&z!=0)
                ans+=(z*(z+1))/2,z=0;
            else if(i==0)
                z++;     
        }
        if(z)
            ans+=(z*(z+1))/2;
        return ans;
    }
};