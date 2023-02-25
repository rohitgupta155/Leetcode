class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        vector<bool> v(nums.size());
        int ans=0;
         for(int i=0;i<nums.size();i++)
        {
            if(!v[i])
            {
                int a=0,start=nums[i];
                do{
                    start=nums[start];
                    a++;
                    v[start]=true;
                }
                while(start!=nums[i]);
                ans=max(a,ans);
            }
        }
        return ans;
    }
};