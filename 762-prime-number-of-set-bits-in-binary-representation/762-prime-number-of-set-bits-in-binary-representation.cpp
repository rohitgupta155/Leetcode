class Solution {
public:
    int countPrimeSetBits(int l, int r) {
        int c=0;
        for(int i=l;i<=r;i++)
        {
            if(check(i))
                c++;
        }
        return c;
    }
    
    bool check(int i)
    {
        int c=0;
        while(i>0)
        {
            if(i%2==1)
                c++;
            i/=2;
        }
        if(c==2||c==3||c==5||c==7||c==11||c==13||c==17||c==19)
            return true;
        return false;
    }
};