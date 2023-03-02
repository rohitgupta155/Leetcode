class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        if(s.size()<10)
            return {};
        unordered_map<string,int> m;
        for(int i=0;i<=s.size()-10;i++)
        {
            m[s.substr(i,10)]++;
        }
        vector<string> ans;
        for(auto i:m)
            if(i.second>1)
            ans.push_back(i.first);
        return ans;
    }
};