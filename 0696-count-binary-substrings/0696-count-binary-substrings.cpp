class Solution {
public:
    int countBinarySubstrings(string s) {
        int c=0,p=0,cu=1;
        for(int i=1;i<s.size();i++)
        {
            if(s[i]!=s[i-1])
            {
                c+=min(p,cu);
                p=cu;
                cu=1;
            }
            else cu++;
        }
        return c+min(p,cu);
    }
};