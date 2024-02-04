class Solution {
public:
    long long maxSum(vector<int>& nums, int m, int k) {
        long long ans=0,total=0;
        unordered_map<int,int> s;
        for(int i=0;i<k;i++)
        {
            ans+=nums[i];
            s[nums[i]]++;
        }
        if(m<=s.size())
            total=ans;
        for(int i=k;i<nums.size();i++)
        {
            ans-=nums[i-k];
            ans+=nums[i];
            s[nums[i-k]]--;
            if(s[nums[i-k]]==0)
                s.erase(nums[i-k]);
            s[nums[i]]++;
            if(s.size()>=m)
                total=max(total,ans);
        }
        return total;
    }
};