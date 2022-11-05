class Solution {
public:
    int countAsterisks(string s) {
        int c=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='*')
                c++;
            else if(s[i]=='|'){
                i++;
                while(s[i]!='|')
                    i++;
            }
        }
        return c;
    }
};