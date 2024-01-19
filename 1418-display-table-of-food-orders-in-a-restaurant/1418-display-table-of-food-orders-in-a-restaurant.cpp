class Solution {
public:
    vector<vector<string>> displayTable(vector<vector<string>>& orders) {
        map<int,unordered_map<string,int>> m;
        set<string> s;
        for(auto i:orders)
        {
            m[stoi(i[1])][i[2]]++;
            s.insert(i[2]);
        }
        vector<vector<string>> ans(m.size()+1);
        ans[0]=vector<string>(s.begin(),s.end());
        ans[0].insert(ans[0].begin(),"Table");
        int j=1;
        for(auto i:m)
        {
            ans[j].push_back(to_string(i.first));
            for(auto k:s)
            {
                if(i.second.count(k))
                ans[j].push_back(to_string(i.second[k]));
                else
                    ans[j].push_back("0");
            }
            j++;
        }
        return ans;
    }
};