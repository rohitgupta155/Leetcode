class Solution {
public:
    vector<vector<int>> ans;
    map<vector<int>,int> s;
    vector<vector<int>> combinationSum(vector<int>& x, int target) {
        for(auto i:x){
        vector<int>a={i};
        solve(x,target,i,a);}
        return ans;
    }
    void solve(vector<int>& x, int t,int a,vector<int> y)
    {
        if(a>t)
            return;
        if(a==t){
            vector<int> c(y.begin(),y.end());
            sort(c.begin(),c.end());
            if(s[c]==0){
            ans.push_back(y);
            s[c]++;}
            return;}
        for(int i=0;i<x.size();i++)
            {if(x[i]+a<=t){y.push_back(x[i]);
            solve(x,t,x[i]+a,y);
            y.pop_back();}}
    }
};