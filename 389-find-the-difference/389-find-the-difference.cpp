class Solution {
public:
    char findTheDifference(string s, string t) {
        char a[26]={0},b[26]={0};
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            a[s[i]-'a']++;
            b[t[i]-'a']++;
        }
        b[t[n]-'a']++;
        for(int i=0;i<=n;i++)
        {
            if(a[t[i]-'a']!=b[t[i]-'a'])
                return t[i];
        }
        return 'a';
        
    }
};