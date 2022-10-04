class Solution {
public:
    int mySqrt(int x) {
        int d=exp2(log2(x)/2);
        cout<<d;
        return d;
        
    }
};