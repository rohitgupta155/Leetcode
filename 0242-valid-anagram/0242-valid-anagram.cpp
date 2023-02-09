class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
            return false;
        map<char,int> m1,m2;
        int n=s.size();
        for(int i=0;i<n;i++){
            m1[s[i]]++;
            m2[t[i]]++;
        }
        if(m1==m2)
            return true;
        return false;
    }
};