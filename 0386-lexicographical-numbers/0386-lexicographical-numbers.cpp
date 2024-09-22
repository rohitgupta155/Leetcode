class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<vector<bool>> d(5,vector<bool>(10,0));
        for(int i=1;i<=n;i++)
        {
            string a=to_string(i);
            for(int j=0;j<a.size();j++)
            {
                d[j][a[j]-'0']=1;
            }
        }
        vector<int> ans; 
        find(0,d,0,ans,n);
        return ans;
    }
    void find(int j,vector<vector<bool>>& d,int s,vector<int>& ans,int &n){
        if(j>4)
            return;
        for(int i=0;i<10;i++)
        {
            if(d[j][i]){
                check(n,s*10+i,ans);
                find(j+1,d,s*10+i,ans,n);
            }
        }
    }
    void check(int n,int a,vector<int>& ans)
    {
        if(a<=n)
            ans.push_back(a);
    }
    
};