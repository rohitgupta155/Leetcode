class Solution {
public:
    bool halvesAreAlike(string s) {
        int l=0,r=0;
        for(int i=0,j=s.size()-1;i<j;i++,j--)
        {
            if(isvowel(s[i]))
                l++;
            if(isvowel(s[j]))
                r++;
        }
        return l==r;
    }
    bool isvowel(char a)
    {
        if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
            return true;
        return false;
    }
};