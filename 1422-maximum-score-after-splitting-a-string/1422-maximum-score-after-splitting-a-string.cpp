class Solution {
public:
    int maxScore(string s) {
        vector<int> a(s.size(),0);
        a[s.size()-1]=s.back()-'0';
        for(int i=s.size()-2;i>=0;i--)
        {
            a[i]+=s[i]+a[i+1]-'0';
        }
        int ans=0,z=0;
        
        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i]=='0')
                z++;
            ans=max(ans,z+a[i+1]);
        }
        return ans;
    }
};