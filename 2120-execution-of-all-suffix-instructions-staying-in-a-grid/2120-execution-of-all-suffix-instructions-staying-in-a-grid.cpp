class Solution {
public:
    vector<int> executeInstructions(int m, vector<int>& p, string s) {
        int n=s.size();
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            int j=i,c=0;
            int a=p[0],b=p[1];
            while(j<n)
            {
                if(s[j]=='R')
                    b++;
                else if(s[j]=='L')
                    b--;
                else if(s[j]=='U')
                    a--;
                else if(s[j]=='D')
                    a++;
                if(a<m&&a>=0&&b<m&&b>=0)
                    c++;
                else break;
                j++;
            }
            ans.push_back(c);
        }
        return ans;
    }
};