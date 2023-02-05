class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n=t.size(),j=0,c=0;
        for(int i=0;i<n;i++)
        {
            if(t[i]==s[j])
            {
                c++;
                j++;
            }
        }
        return j==s.size();
        
    }
};