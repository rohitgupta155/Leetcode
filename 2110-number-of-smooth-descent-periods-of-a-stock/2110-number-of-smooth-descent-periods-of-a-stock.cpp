class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        long long ans=prices.size(),c=0;
        for(int i=1;i<prices.size();i++)
        {
            if(prices[i]==prices[i-1]-1)
                c++;
            else{
                ans+=(c*(c+1)/2);
                c=0;
            }
        }
        ans+=(c*(c+1)/2);

        return ans;
    }
};