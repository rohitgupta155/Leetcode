class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        int n=s.size(),c=0;
        unordered_map<string,int> word;
        for(auto i:words)
            word[i]++;
        for(auto t:word)
        {
            int j=0;
            if(t.first.size()>s.size())
                continue;
        for(int i=0;i<n;i++)
        {
            if(s[i]==t.first[j])
            {
                j++;
            }
        }
        if(j==t.first.size())
            c+=t.second;
        }
        return c;
    }
};