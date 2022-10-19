class Solution {
public:
    int minOperations(string s) {
        int c=0,d=0;
        for(int i=0;i<s.size();i+=2)
        {
            if(s[i]!='0')
                c++;
            if(i<s.size()-1&&s[i+1]!='1')
                c++;
        }
        for(int i=0;i<s.size();i+=2)
        {
            if(s[i]!='1')
                d++;
            if(i<s.size()-1&&s[i+1]!='0')
                d++;
        }
        return min(c,d);
    }
};