class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string b=s;
        for(int i=0;i<s.size()-1;i++)
        {
            b+=b[0];
            b.erase(b.begin());
            if(b==s)
                return true;
        }
        return false;
    }
};