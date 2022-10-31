class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string,string> m;
        for(auto i:knowledge)
            m[i[0]]=i[1];
        string ans,t="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                i++;
                while(s[i]!=')')
                {
                    t+=s[i++];
                }
                if(m.count(t))
                    ans+=m[t];
                else ans+='?';
                t="";
            }
            else ans+=s[i];
        }
        return ans;
    }
};