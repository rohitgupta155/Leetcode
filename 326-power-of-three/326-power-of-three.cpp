class Solution {
public:
    bool isPowerOfThree(long int n) {
       if(n<=0)
          return false;
        double i=log10(n)/log10(3);
        if((int)i<i)
        return false;
    return true;
    }
};