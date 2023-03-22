class Solution {
public:
    double findMaxAverage(vector<int>& n, int k) {
        double sum=0,ans;
        for(int i=0;i<k;i++)
            sum+=n[i];
        ans=sum;
        for(int i=k;i<n.size();i++)
        {
            sum-=(n[i-k]-n[i]);
            if(ans<sum)
                ans=sum;
        }
        return ans/k;
        
    }
};