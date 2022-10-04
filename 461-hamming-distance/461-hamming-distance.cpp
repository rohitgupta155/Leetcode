class Solution {
public:
    int hammingDistance(int x, int y) {
        int t=x^y,c=0;
        while(t)
        {
            if(t&1)
                c++;
            t=t>>1;
        }
        return c;
    }
};