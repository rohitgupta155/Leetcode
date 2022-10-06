class Solution {
public:
    bool checkRecord(string s) {
        int n=s.size(),c=0;
        if(n==1)
            return true;
        if(s[0]=='A')
            c++;
        if(s[1]=='A')
            c++;
        
        for(int i=2;i<n;i++)
            if(s[i]=='L'&&s[i-1]=='L'&&s[i-2]=='L')
                return false;
        else if(s[i]=='A')
            c++;
        return c<2;
    }
};