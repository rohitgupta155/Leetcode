class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<long long> l(n,0),r(n,0);
        l[0]=nums[0];
        r[n-1]=nums.back();
        for(int i=1;i<n-1;i++)
        {
            l[i]+=l[i-1]+nums[i];
            r[n-i-1]=r[n-i]+nums[n-i-1];
        }
        if(n==1)
            return 0;
        long long ans=r[1]-(long long)(n-1)*nums[0];
        ans=min(ans,(long long)nums.back()*(n-1)-l[n-2]);
        for(int i=1;i<n-1;i++)
        {
            ans=min(ans,i*(long long)nums[i]-l[i-1]+r[i+1]-(n-i-1)*(long long)nums[i]);
        }
        return ans;
    }
};