class Solution {
public:
    vector<vector<string>> v;
    vector<vector<int>> p;
    vector<vector<string>> ans;

    bool pal(string a)
    {
        int i=0,j=a.size()-1;
        while(i<j&&a[i]==a[j])
        {
            i++,j--;
        }
        return i>=j;
    }
    vector<vector<string>> partition(string s) {
        
        v=vector<vector<string>>(s.size(),vector<string>(s.size(),""));
        p=vector<vector<int>>(s.size(),vector<int>(s.size(),0));
        for(int i=0;i<s.size();i++)
        {
            v[i][i]+=s[i];
            for(int j=i+1;j<s.size();j++)
            {
                v[i][j]=v[i][j-1]+s[j];
            }
        }
        for(int i=0;i<s.size();i++)
        {
            for(int j=i;j<s.size();j++)
            {
                p[i][j]=pal(v[i][j]);
            }
        }
        
        for(int i=0;i<s.size();i++)
        {
            if(p[0][i])
            {
                check(i+1,i+1,{v[0][i]});                
            }
        }
        return ans;
    }
    
    void check(int i,int j,vector<string> t)
    {
        if(i==v.size())
        {
            ans.push_back(t);
            return;
        }
        if(j==v.size()-1)
        {
            t.push_back(v[i][j]);
            ans.push_back(t);
            return;
        }
        for(int k=j;k<v.size();k++)
        {
            if(p[i][k])
            {
                t.push_back(v[i][k]);
                check(k+1,k+1,t);
                t.pop_back();
            }
        }
        
    }

};