class Solution {
public:
    int minLength(string s) {
        bool check=true;
        while(check&&s.size())
        {
            string n="";
            int i=0;
            for(i=0;i<s.size()-1;i++)
            {
                if((s[i]=='A'&&s[i+1]=='B')||(s[i]=='C'&&s[i+1]=='D'))
                 i++;
                else 
                 n+=s[i];

            }
            if(s.size()&&i<s.size())
                n+=s.back();
            if(n==s)
                check=false;
            s=n;
        }
        return s.size();
    }
};