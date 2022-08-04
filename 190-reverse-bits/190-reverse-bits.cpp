class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t a=0;
        for(int i=32;i>0;i--)
        {
            a=a<<1|n%2;
            n=n>>1;
        }
        return a;
    }
};