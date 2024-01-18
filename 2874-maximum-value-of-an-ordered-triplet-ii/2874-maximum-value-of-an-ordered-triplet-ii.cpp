class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
         vector<int> l(nums.size()),r(nums.size());
        l[0]=nums[0];
        r.back()=nums.back();
        for(int i=1;i<nums.size();i++)
        {
            l[i]=max(l[i-1],nums[i]);
            r[nums.size()-i-1]=max(r[nums.size()-i],nums[nums.size()-i-1]);
        }
        long long ans=0;
       for(int i=1;i<nums.size()-1;i++)
       {
           ans=max(ans,(l[i-1]-nums[i])*1LL*r[i+1]);
       }
        return ans;
    }
};