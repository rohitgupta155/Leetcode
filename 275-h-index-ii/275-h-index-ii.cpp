class Solution {
public:
    int hIndex(vector<int>& c) {
        int n=c.size();
        int s=0,e=n-1;
        while(s<=e)
        {
            int m=s+(e-s)/2;
            if(c[m]==(n-m))
                return n-m;
            else if(c[m]>(n-m))
                e=m-1;
            else
                s=m+1;
        }
        return n-e-1;
    }
};