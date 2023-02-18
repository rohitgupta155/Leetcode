class Solution {
public:
    int characterReplacement(string s, int k) {
        int start=0;
        unordered_map<char,int> m;
        int mf=0,ls=0;
        for(int end=0;end<s.size();end++)
        {
            m[s[end]]++;
            mf=max(mf,m[s[end]]);
            bool iv=(end+1-start-mf<=k);
            if(!iv)
            {
                m[s[start]]--;
                start++;
            }
            ls=end+1-start;
        }
        return ls;
    }
};