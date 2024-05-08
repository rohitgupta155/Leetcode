class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& s) {
        vector<int> a(s.begin(),s.end());
        sort(a.begin(),a.end(),greater<int>());
        unordered_map<int,int> m;
        int j=1;
        for(auto i:a)
            m[i]=j++;
        a.clear();
        vector<string> ans;
        for(auto i:s)
        {
            if(m[i]==1)
                ans.push_back("Gold Medal");
            else if(m[i]==2)
                ans.push_back("Silver Medal");
            else if(m[i]==3)
                ans.push_back("Bronze Medal");
            else ans.push_back(to_string(m[i]));
        }
        m.clear();
        return ans;
    }
};