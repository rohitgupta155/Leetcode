class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        unordered_map<string,int> m;
        for(auto i:words)
            m[i]++;
        string a;
        int ans=0;
        for(auto i:s)
        {
            a+=i;
            ans+=m[a];
        }
        return ans;
    }
};