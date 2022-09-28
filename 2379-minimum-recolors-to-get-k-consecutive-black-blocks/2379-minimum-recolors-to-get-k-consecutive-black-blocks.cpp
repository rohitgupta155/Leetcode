class Solution {
public:
    int minimumRecolors(string s, int k) {
         int n=s.size(),ans=0,a=0;
        for(int i=0;i<k;i++)
        {
            if(s[i]=='W')
                ans++;
        }
        a=ans;
        int j=0;
        for(int i=k;i<n;i++)
        {
            if(s[i]=='W')
                ans++;
            if(s[j]=='W')
                ans--;
            j++;
            a=min(ans,a);
            }
        return a;
    }
};