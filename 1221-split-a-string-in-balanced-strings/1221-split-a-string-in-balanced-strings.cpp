class Solution {
public:
    int balancedStringSplit(string s) {
        int l=0,r=0,c=0;
        for(auto i:s)
        {
            if(i=='L')
                l++;
            else if(i=='R')
                r++;
            if(l==r)
                c++,r=l=0;
        }
        return c;
    }
};