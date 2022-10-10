class Solution {
public:
    string breakPalindrome(string p) {
        if(p.size()==1)
            return "";
        if(p[0]!='a')
            {p[0]='a';
        return p;}
        for(int i=0;i<p.size()/2;i++)
        {
            if(p[i]!='a')
                {p[i]='a';
            return p;}
        }
        p[p.size()-1]='b';
        return p;
    }
};