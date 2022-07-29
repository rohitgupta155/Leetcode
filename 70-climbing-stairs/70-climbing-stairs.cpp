class Solution {
public:
    int a=2,b=3,c;
    int climbStairs(int n) {
        if(n<4)
            return n;
        return fib(n);
    }
    int fib(int n)
    {
        for(int i=4;i<=n;i++)
        {
            c=a+b;
            a=b;
            b=c;
        }
        return c;
    }
};