class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        unordered_map<int,int> m;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(!m.count(s[i]))
            {
                m[s[i]]=i;
            }
        }
        int ans=-1;
        for(int i=0;i<s.size();i++)
        {
            if(m[s[i]]>i)
            {
                ans=max(ans,m[s[i]]-i-1);
            }
        }
        return ans;
    }
};