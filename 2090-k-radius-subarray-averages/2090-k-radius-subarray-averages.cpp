class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        if(k==0)
            return nums;
        vector<int> ans(nums.size(),-1);
        if(k*2>=nums.size())
            return ans;
        long long int s=0;
        for(int i=0;i<2*k+1;i++)
        {
            s+=nums[i];
        }
        int l=2*k+1;
        
        for(int i=k;i<nums.size()-k-1;i++)
        {
            ans[i]=(s/l);
            s=s-nums[i-k]+nums[i+k+1];
            
        }
        ans[nums.size()-k-1]=(s/l);
        return ans;
    }
};