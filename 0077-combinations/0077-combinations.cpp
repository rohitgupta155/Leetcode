class Solution {
public:
    set<set<int>> s;
    set<int> t;
    int l;
    vector<vector<int>> combine(int n, int k) {
        l=k;
        for(int i=1;i<=n;i++)
        {
            t.insert(i);
            combination(n,i+1);
            t.erase(i);
        }
        vector<vector<int>> ans;
        for(auto i:s)
        {
            vector<int> temp(i.begin(),i.end());
            ans.push_back(temp);
        }
        return ans;
    }
    void combination(int n,int i)
    {
        if(t.size()==l){
            if(s.find(t)==s.end())
            s.insert(t);
             return;}
        for(;i<=n;i++)
        {
            t.insert(i);
            combination(n,i+1);
            t.erase(i);
        }
    }
};