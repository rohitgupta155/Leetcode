class Solution {
public:
    bool checkOnesSegment(string s) {
        int c=0,ans=0;
        for(char k:s)
        {
            int i=k-'0';
            if(i)
                c++;
            else {
                if(c)
                    ans++;
                 c=0;}
        }
        if(c)
            ans++;
        return ans==1;
    }
};