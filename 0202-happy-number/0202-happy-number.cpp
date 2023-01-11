class Solution {
public:
    map<int,int> se;
    bool isHappy(int n) {
        if(happy(n)||n==1)
            return true;
        return false;
    }
    int happy(int n)
    {
        int s;
        while(s!=1&&se[n]<2){
            s=0;
            while(n>0)
            {
                int i=n%10;
                s=s+i*i;
                n/=10;
            }
            se[s]++;
            n=s;
        }
        return s==1;
        
    }
};