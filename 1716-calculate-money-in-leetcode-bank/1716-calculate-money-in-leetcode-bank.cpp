class Solution {
public:
    int totalMoney(int n) {
        int s=0,m=1;
        while(n>0)
        {
            if(n>=7)
           { s+=(7*(m+m+6)/2);
            n-=7;
            m++;}
            else if(n>0){ s+=(n*(m+m+n-1))/2;n=0;}
            
        }
        return s;
    }
};