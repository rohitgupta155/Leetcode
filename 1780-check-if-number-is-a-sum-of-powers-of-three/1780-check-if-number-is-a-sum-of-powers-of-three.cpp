class Solution {
public:
    bool checkPowersOfThree(int n) {
        int check=INT_MAX;
        while(n>=3)
        {
            
            int i=log10(n)/log10(3);
            if(check<=i)
                return false;
            check=i;
            n=n-pow(3,i);
            
        }
        if(n==1||n==0)
            return true;
        return false;
            
    }
};