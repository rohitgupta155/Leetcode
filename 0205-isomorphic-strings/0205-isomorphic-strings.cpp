class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size())
            return false;
        int n=s.size();
        unordered_map<char,vector<int>> w1,w2;
        for(int i=0;i<n;i++)
            w1[s[i]].push_back(i);
        for(int i=0;i<n;i++)
            w2[t[i]].push_back(i);       
        for(int i=0;i<n;i++){
            if(w1[s[i]]!=w2[t[i]])
                return false;
}        return true;
    }
};