class Solution {
public:
    int maxVowels(string s, int k) {
        int n=s.size(),ans=0,a=0;
        for(int i=0;i<k;i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
                ans++;
        }
        a=ans;
        int j=0;
        for(int i=k;i<n;i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
                ans++;
            if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u')
                ans--;
            j++;
            a=max(ans,a);
            }
        return a;
    }
};