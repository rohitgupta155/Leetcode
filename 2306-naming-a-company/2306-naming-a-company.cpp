class Solution {
public:
    long long distinctNames(vector<string>& ideas) {
        unordered_set<string> s[26];
        for(auto &i:ideas)
        s[i[0]-'a'].insert(i.substr(1));
        long long ans=0;
        for(int i=0;i<25;i++)
            for(int j=i+1;j<26;j++)
            {
                int mutual=0;
                for(auto &idea:s[i]){
                    if(s[j].count(idea))
                        mutual++;
                }
                ans+=2LL*(s[i].size()-mutual)*(s[j].size()-mutual);
            }
        return ans;
        
    }
};