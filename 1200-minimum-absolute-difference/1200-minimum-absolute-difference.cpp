class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& c) {
        int n=c.size(),m=INT_MAX;
        vector<vector<int>> ans;
        sort(c.begin(),c.end());
        for(int i=0;i<n-1;i++)
        {
           m=min(m,c[i+1]-c[i]);
        }
        for(int i=0;i<n-1;i++)
        {
           if((c[i+1]-c[i])==m)
               ans.push_back({c[i],c[i+1]});
        }
        return ans;
    }
};