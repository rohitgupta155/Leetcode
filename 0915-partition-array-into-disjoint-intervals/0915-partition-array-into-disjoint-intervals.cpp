class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {
         vector<int> l(nums.size()),r(nums.size());
        l[0]=nums[0];
        r.back()=nums.back();
        for(int i=1;i<nums.size();i++)
        {
            l[i]=max(l[i-1],nums[i]);
            r[nums.size()-i-1]=min(r[nums.size()-i],nums[nums.size()-i-1]);
        }
     
        int i;
        for(i=0;i<nums.size()-1;i++)
        {
            if(l[i]<=r[i+1])
                return i+1;
        }
        return i;
    }
};