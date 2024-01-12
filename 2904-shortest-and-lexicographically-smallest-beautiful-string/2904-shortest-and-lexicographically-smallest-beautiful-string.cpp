class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
       vector<string> ans;
        vector<int> indexes;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1')
                indexes.push_back(i);
            
        }
        if(k>indexes.size())
            return "";
        for(int i=0;i<=indexes.size()-k;i++)
        {
            ans.push_back(s.substr(indexes[i],indexes[i+k-1]-indexes[i]+1));
        }
        sort(ans.begin(),ans.end(),[](string a,string b){
            if(a.size()==b.size())
                return a<b;
            return a.size()<b.size();
        });
        return ans[0];
    }
};