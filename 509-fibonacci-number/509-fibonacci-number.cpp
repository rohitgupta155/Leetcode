class Solution {
public:
    int fib(int n) {
        if(n<2)
            return n;
        return (pow((1+sqrt(5))/2,n)-pow((1-sqrt(5))/2,n))/sqrt(5);
    }
};