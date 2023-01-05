class Solution {
public:
    bool canConstruct(string s, int k) {
        if(s.size()<k)
            return false;
        if(s.size()==k)
            return true;
        unordered_map<char,int> m;
        for(auto i:s)
            m[i]++;
        int o=0;
        for(auto i:m)
        {
            if(i.second%2)
                o++;
        }
        if(o>k)
            return false;
        return true;
    }
};