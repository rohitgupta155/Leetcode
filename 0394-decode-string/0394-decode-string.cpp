class Solution {
public:
    string decodeString(string s) {
        string ans="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='0'&&s[i]<='9')
            {
                int a;
                string num="";
                while(s[i]>='0'&&s[i]<='9')
                    num+=s[i++];
                a=stoi(num);
                string temp="";
                stack<char> t;
                t.push('[');
                i+=1;
                while(t.size()>0)
                {
                    temp+=s[i];
                    if(s[i]=='[')
                        t.push('[');
                    else if(s[i]==']')
                       {t.pop();
                       }
                    i++;
                }
                i--;
                temp.pop_back();
                string c=decodeString(temp);
                while(a--)
                    ans+=c;
            }
            else ans+=s[i];
        }
        return ans;
    }
};