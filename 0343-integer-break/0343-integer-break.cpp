class Solution {
public:
    int integerBreak(int n) {
        if(n<=3)
            return n-1;
        int ans=1;
        while(n)
        {
            if(n==4){
                ans*=4;
                break;}
            if(n<=2)
            {
                ans*=n;
                break;
            }
            else {
                ans*=3;
                n-=3;
            }
        }
        return ans;
    }
};