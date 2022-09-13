class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        long long sum=0,l=0;
        int c=0,n=nums.size(),a,m=INT_MAX,index;
        for(auto i:nums)
            sum+=i;
        for(int i=0;i<n;i++)
        {
            l+=nums[i];
            sum-=nums[i];
            if(i==n-1)
            a=l/n;
            else
            a=abs(l/(i+1)-sum/(n-i-1));
            if(a<m){
                index=i;
            m=a;}
            
        }
        return index;
    }
};