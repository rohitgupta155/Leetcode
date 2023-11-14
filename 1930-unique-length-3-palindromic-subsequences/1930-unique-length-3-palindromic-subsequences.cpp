class Solution {
public:
    int countPalindromicSubsequence(string s) {
        unordered_map<char,int> r,l;
        unordered_set<string> c;
        for(int i=s.size()-1;i>1;i--)
            r[s[i]]++;
        l[s[0]]++;
        for(int i=1;i<s.size()-1;i++)
        {
            for(char j='a';j<='z';j++)
            {
                if(l.count(j)!=0&&r.count(j)!=0)
                    c.insert({j,s[i],j});
            }
            l[s[i]]++;
            r[s[i+1]]--;
            if(r[s[i+1]]==0)
                r.erase(s[i+1]);
        }
        return c.size();
        
    }
};