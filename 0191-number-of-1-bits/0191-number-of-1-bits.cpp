class Solution {
public:
    int hammingWeight(uint32_t n) {
        int c=0;
        for(int i=32;i>0;i--)
        {
            if(n%2==1)
                c++;
            n=n>>1;
        }
        return c;
    }
};