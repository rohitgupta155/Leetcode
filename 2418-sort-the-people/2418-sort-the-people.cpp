class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        unordered_map<int,string> m;
        int n=names.size();
        for(int i=0;i<n;i++)
        {
            m[heights[i]]=names[i];
        }
        sort(heights.begin(),heights.end(),greater<int>());
        names.clear();
        for(auto i:heights)
        {
            names.push_back(m[i]);
        }
        return names;
    }
};