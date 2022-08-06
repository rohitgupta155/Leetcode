class Solution {
public:
    bool digitCount(string s) {
        map<int,int> m;
        int n=s.size();
        for(int i=0;i<n;i++)
        m[s[i]-'0']++;
        for(int i=0;i<n;i++)
        {
            if(m[i]!=(s[i]-'0'))
                return false;
        }
        return true;
    }
};