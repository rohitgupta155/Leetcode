class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        if(s.size()<p.size())
            return {};
        unordered_map<char,int> a,b;
        for(int i=0;i<p.size();i++)
            a[p[i]]++,b[s[i]]++;
        vector<int> ans;
        bool found=false;
        if(matches(a,b)){found=true;ans.push_back(0);}
        for(int i=0;i<=s.size()-p.size();i++)
        {
                b[s[i]]--;
                b[s[i+p.size()]]++;
                if(matches(a,b))
                    ans.push_back(i+1);
            
        }
        return ans;
    }
    
    bool matches(unordered_map<char,int> a,unordered_map<char,int> b)
    {
        for(auto i:a)
        {
            if(b[i.first]!=i.second)
                return false;
        }
        return true;
    }
};