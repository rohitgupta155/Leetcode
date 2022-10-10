class Solution {
public:
    int candy(vector<int>& r) {
        int r2l[r.size()],l2r[r.size()];
        int n=r.size();
        r2l[0]=1;
        l2r[n-1]=1;
        for(int i=1;i<n;i++)
        {
            if(r[i-1]>=r[i])
                r2l[i]=1;
            else r2l[i]=r2l[i-1]+1;
        }
        for(int i=n-2;i>=0;i--)
        {
            if(r[i]<=r[i+1])
                l2r[i]=1;
            else l2r[i]=l2r[i+1]+1;
        }
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=max(r2l[i],l2r[i]);
        }
        return sum;
    }
};