class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        unordered_set<string> ans;
        for(int i=0;i<words.size();i++)
            for(int j=i+1;j<words.size();j++)
            {
                if(words[i].find(words[j])!=string::npos)
                    ans.insert(words[j]);
                else if(words[j].find(words[i])!=string::npos)
                    ans.insert(words[i]);
            }
        vector<string> a(ans.begin(),ans.end());
        return a;
    }
};