class Solution {
public:
    unordered_set<string> a;
    vector<string> letterCasePermutation(string s) {
        a.insert(s);
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='a'&&s[i]<='z')
            {
                s[i]-=32;
                convert(s,i+1);
                s[i]+=32;
            }
            else if(s[i]<='Z'&&s[i]>='A')
            {
                s[i]+=32;
                convert(s,i+1);   
                s[i]-=32;
            }
        }
        vector<string> ans(a.begin(),a.end());
        return ans;
    }
    
    void convert(string s,int j)
    {
        if(a.find(s)==a.end())
            a.insert(s);
        for(int i=j;i<s.size();i++)
        {
            if(s[i]>='a'&&s[i]<='z')
            {
                s[i]-=32;
                convert(s,i+1);
                s[i]+=32;
            }
            else if(s[i]<='Z'&&s[i]>='A')
            {
                s[i]+=32;
                convert(s,i+1);   
                s[i]-=32;
            }
        }
    }
};