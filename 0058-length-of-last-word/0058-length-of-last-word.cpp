class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int i,l=0;
        for(i=s.size()-1;i>=0;i--)
        {
            if(s[i]!=' ')
                break;
        }
        for(;i>=0;i--)
        {
            if(s[i]==' ')
                break;
            l++;
        }
        return l;
    }
};