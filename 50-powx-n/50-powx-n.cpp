class Solution {
public:
    double myPow(double x, int n) {
        if(n==0)
            return 1;
        if(n==1)
            return x;
        if((abs(n%2)==1)&&(x<0))
            return -exp(n*log(abs(x)));
       return exp(n*log(abs(x)));
    }
};