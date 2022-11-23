class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string,string> m;
        for(auto i:paths)
            m[i[0]]=i[1];
        string a=paths[0][0];
        while(m.count(a))
            a=m[a];
        return a;
    }
};