class Solution {
public:
    bool makeEqual(vector<string>& words) {
        unordered_map<char,int> m;
        for(auto i:words)
            for(auto j:i)
                m[j]++;
        unordered_set<int> s;
        for(auto i:m)
           { if(i.second<words.size())
                return false;
            s.insert(i.second%words.size());}
        return s.size()==1;
    }
};