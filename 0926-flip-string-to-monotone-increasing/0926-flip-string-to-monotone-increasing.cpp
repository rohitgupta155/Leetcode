class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int m=0;
        for(auto c:s)
            if(c=='0')
                m++;
        int ans=m;
        for(auto c:s)
            if(c=='0')
                ans=min(ans,--m);
            else ++m;
        return ans;
    }
};