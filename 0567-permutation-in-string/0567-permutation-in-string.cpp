class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size())
            return false;
        unordered_map<char,int> m;
        for(auto i:s1)
            m[i]++;
        for(int i=0;i<=s2.size()-s1.size();i++)
        {
            unordered_map<char,int> t;
            for(int j=i;j<s1.size()+i;j++){
                t[s2[j]]++;
            }
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