class Solution {
public:
    bool isSumEqual(string f, string s, string t) {
        for(int i=0;i<f.size();i++)
            f[i]=f[i]-'a'+'0';
        for(int i=0;i<s.size();i++)
            s[i]=s[i]-'a'+'0';
        for(int i=0;i<t.size();i++)
            t[i]=t[i]-'a'+'0';
        return stoi(f)+stoi(s)==stoi(t);
    }
};