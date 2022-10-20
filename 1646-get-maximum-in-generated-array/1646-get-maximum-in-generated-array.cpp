class Solution {
public:
    int getMaximumGenerated(int n) {
        if(n==0)
            return 0;
        if(n<=2)
            return 1;
        if(n==3)
            return 2;
        vector<int> a(n+1);
        a[0]=0,a[1]=1;
        for(int i=1;2*i<n;i++)
        {
            a[2*i]=a[i];
            a[2*i+1]=a[i]+a[i+1];
        }
        return *max_element(a.begin(),a.end());
    }
};