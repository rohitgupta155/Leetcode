class Solution {
public:
    int mySqrt(int num) {
        if(num<=1)
            return num;
        int l=1,r=num/2;
        while(l<=r)
        {
            long long int m=(r-l)/2+l;
            long long int s=m*m;
            if(s==num)
                return m;
            if(s<num)
                l=m+1;
            else
                r=m-1;
        }
        return r;        
    }
};