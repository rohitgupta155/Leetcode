// class Solution {
// public:
//     vector<vector<int>> combinationSum3(int k, int n) {
        
//     }
// };
class Solution {
public:
    vector<vector<int>> ans;
    map<vector<int>,int> s;
    vector<int> x;
    vector<vector<int>> combinationSum3(int k, int target) {
        if(target<k)
            return {};
        vector<int> b={1,2,3,4,5,6,7,8,9};
        
        vector<bool> vis(b.size(),false);  
        x=b;
        for(int i=0;i<b.size();i++){
        vector<int>a={x[i]};
            vis[i]=true;
        solve(target,vis,x[i],a,i,k);
            vis[i]=false;
}
        return ans;
    }
    void solve(int t,vector<bool>& vis,int a,vector<int> y,int j,int &k)
    {
        if(a>t ||y.size()>k)
            return;
        if(a==t&&y.size()==k){
            vector<int> c(y.begin(),y.end());
            sort(c.begin(),c.end());
            if(s[c]==0){
            ans.push_back(y);
            s[c]++;}
            return;}
        for(int i=j;i<x.size();i++)
            {if(!vis[i]){if(x[i]+a<=t){y.push_back(x[i]);
            vis[i]=true;
            solve(t,vis,x[i]+a,y,i,k);
            y.pop_back();
            vis[i]=false;}}
    }
    }
};