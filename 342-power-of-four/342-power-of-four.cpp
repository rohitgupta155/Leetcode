class Solution {
public:
    bool isPowerOfFour(int n){
    if(n<=0)
          return false;
        double i=log2(n)/log2(4);
        if((int)i<i)
        return false;
    return true;
}

};