class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& w) {
        vector<vector<string>> s;
        unordered_map<string,vector<string>> m;
        for(int i=0;i<w.size();i++){
            string s=w[i];
                sort(s.begin(),s.end());
                m[s].push_back(w[i]);
        }
        for(auto i:m)
            s.push_back(i.second);
        return s;
    
    }
};