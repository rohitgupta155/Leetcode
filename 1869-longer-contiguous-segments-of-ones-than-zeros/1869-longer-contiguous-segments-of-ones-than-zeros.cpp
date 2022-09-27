class Solution {
public:
    bool checkZeroOnes(string s) {
         int c=0,ans1=0,ans0=0;
        for(char k:s)
        {
            int i=k-'0';
            if(i)
                c++;
            else {ans1=max(ans1,c);
                 c=0;}
        }
        ans1=max(ans1,c);
        c=0;
        for(char k:s)
        {
            int i=k-'0';
            if(!i)
                c++;
            else {ans0=max(ans0,c);
                 c=0;}
        }
        ans0=max(ans0,c);
        return ans1>ans0;
    }
};