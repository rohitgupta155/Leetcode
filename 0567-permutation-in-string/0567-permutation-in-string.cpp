class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size())
            return false;
        unordered_map<char,int> m,t;
        for(auto i:s1)
            m[i]++;
        for(int j=0;j<s1.size();j++){
                t[s2[j]]++;
            }
        if(matches(m,t))
            return true;
        for(int i=s1.size();i<=s2.size();i++)
        {
            t[s2[i-s1.size()]]--;
            if(t[s2[i-s1.size()]]==0)
                t.erase(s2[i-s1.size()]);
            t[s2[i]]++;
            if(matches(m,t))
                return true;
        }
        return false;
    }
    bool matches(unordered_map<char,int> m,unordered_map<char,int> t)
    {
        for(auto i:m)
        {
            if(t[i.first]!=i.second)
                return false;
        }
        return true;
    }
};