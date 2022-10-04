class Solution {
public:
    int bitwiseComplement(int t) {
        if(t==0)
            return 1;
        int c=0,i=0;
        while(t)
        {
            c=(c)|(((t&1)^1)<<i);
            i++;
            t=t>>1;
        }
        return c;
    
    }
};