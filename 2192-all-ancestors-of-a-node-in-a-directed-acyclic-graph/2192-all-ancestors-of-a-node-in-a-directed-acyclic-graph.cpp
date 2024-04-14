class Solution {
public:
    unordered_map<int,vector<int>> a;
    set<int> curr;
    vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
        vector<vector<int>> ans;
        for(auto i:edges)
            a[i[1]].push_back(i[0]);
        for(int i=0;i<n;i++)
        {
            check(i);
            ans.push_back(vector<int>(curr.begin(),curr.end()));
            curr.clear();
        }
        return ans;
    }
    void check(int c)
    {
        for(auto i:a[c])
        {
            if(!curr.count(i))
            {
                curr.insert(i);
                check(i);
            }
        }
    }
    
};