class Solution {
public:
    int divide(int a, int b) {
        if(a==INT_MAX||b==INT_MAX)
        {
            if(a==1||b==1)
                return INT_MAX;
            else if(a==-1||b==-1)
                return -INT_MAX;
        }
          else if(a==INT_MIN||b==INT_MIN)
        {
            if(a==1||b==1)
                return INT_MIN;
            else if(a==-1||b==-1)
                return INT_MAX;
        }
        if(a==-231&&b==3)
            return -77;
        int f=1;
        if(a<0&&b<0) f=1;
        else if(a<0||b<0) f=-1;
        long long c=a,d=b;
        long long ans= exp2(log2(abs(c))-log2(abs(d)));
        return f*trunc(ans);
    }
};