class Solution {
public:
    int sumOfBeauties(vector<int>& nums) {
        vector<int> l(nums.size()),r(nums.size());
        l[0]=nums[0];
        r.back()=nums.back();
        for(int i=1;i<nums.size();i++)
        {
            l[i]=max(l[i-1],nums[i]);
            r[nums.size()-i-1]=min(r[nums.size()-i],nums[nums.size()-i-1]);
        }
       
        int sum=0;
        for(int i=1;i<nums.size()-1;i++)
        {
            if(nums[i]>l[i-1]&&nums[i]<r[i+1])
                sum+=2;
            else if(nums[i]>nums[i-1]&&nums[i]<nums[i+1])
                sum+=1;
        }
        return sum;
    }
};