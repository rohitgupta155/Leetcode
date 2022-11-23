class Solution {
public:
    string shiftingLetters(string s, vector<int>& shift) {
        int t=0;
        for(int i=shift.size()-1;i>=0;i--)
        {
            t+=shift[i];
            s[i]=(s[i]-'a'+t)%26+97;
            t%=26;
        }
        return s;
    }
};