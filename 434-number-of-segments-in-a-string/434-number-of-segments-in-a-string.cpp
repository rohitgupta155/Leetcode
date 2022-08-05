class Solution {
public:
    int countSegments(string s) {
        if(s.size()==0)
            return 0;
        int n=s.size(),c=0;
        for(int i=2;i<=n+1;i++)
        {
            if(c==0&&s[i-2]==' ')
                continue;
            else if(s[i-2]!=' '&&s[i-1]==' ')
                c++;
            else if(s[i-2]!=' '&&s[i-1]=='\0')
                c++;
        }
        return c;
    }
};