class Solution {
public:
    int pivotInteger(int n) {
        vector<int> v(n+1,0);
        for(int i=1;i<=n;i++)
        {
            v[i]=v[i-1]+i;
        }
        for(int i=1;i<=n;i++)
            if(v[i]==v[n]-v[i-1])
                return i;
        return -1;
    }
};