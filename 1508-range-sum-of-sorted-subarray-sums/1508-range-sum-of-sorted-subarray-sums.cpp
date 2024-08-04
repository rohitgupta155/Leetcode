class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<long> s;
        for(int i=0;i<n;i++)
        {
            long sum=0;
            for(int j=i;j<n;j++)
            {
                sum+=nums[j];
                s.push_back(sum);
            }
        }
        sort(s.begin(),s.end());
        int ans=0;
        for(int i=left-1;i<right;i++)
        {
            ans+=s[i];
            ans=ans%1000000007;
        }
        return ans;
    }
};