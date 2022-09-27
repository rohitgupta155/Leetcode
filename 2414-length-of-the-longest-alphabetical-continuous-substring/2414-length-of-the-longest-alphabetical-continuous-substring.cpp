class Solution {
public:
    int longestContinuousSubstring(string s) {
        int c=1,ans=0,n=s.size();
        for(int i=1;i<n;i++)
        {
            if(s[i]==s[i-1]+1)
                c++;
            else{
                ans=max(ans,c);
                c=1;
            }
        }
        ans=max(ans,c);
        return ans;
    }
};