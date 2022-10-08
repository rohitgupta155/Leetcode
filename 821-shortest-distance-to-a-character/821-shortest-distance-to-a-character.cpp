class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int d=INT_MIN/2,n=s.size();
        vector<int> ans(n);
        for(int i=0;i<n;i++)
           { if(s[i]==c)
                d=i;
        ans[i]=i-d;
        }
        d=INT_MAX;
        for(int i=n-1;i>=0;i--)
           { if(s[i]==c)
                d=i;
        ans[i]=min(d-i,ans[i]);
        }
        return ans;
        
    }
};