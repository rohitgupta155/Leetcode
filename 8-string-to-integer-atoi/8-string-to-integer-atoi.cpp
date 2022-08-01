class Solution {
public:
    int myAtoi(string s) {
        string m;
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=' '&&s[i]!='+'&&s[i]!='-'&&!(s[i]>='0'&&s[i]<='9'))
                break;
            if((m.back()>='0'&&m.back()<='9'||(m.back()=='+'||m.back()=='-'))&&(s[i]<'0'||s[i]>'9'||s[i]==' ')||((m[0]=='+'||m[0]=='-')&&(s[i]=='-'||s[i]=='+')))
                break;
            if((s[i]>='0'&&s[i]<='9')||s[i]=='+'||s[i]=='-')
                m.push_back(s[i]);
        }
        if(m.back()=='-'||m.back()=='+')
            return 0;
        long long a=0;
        int flag=1,i=0;
        if(m[i]=='-'||m[i]=='+'){
                flag=(m[i]=='-')?-1:1;
        i++;}
        for(i;i<m.size();i++)
        {            
           if(flag*a>INT_MAX||flag*a<INT_MIN)
            {
                if(flag*a>INT_MAX)
                    return INT_MAX;
                else if(flag*a<INT_MIN)
                    return INT_MIN;
            }

                a=a*10+(m[i]-48);

    
        }
         if(flag*a>INT_MAX||flag*a<INT_MIN)
            {
                if(flag*a>INT_MAX)
                    return INT_MAX;
                else if(flag*a<INT_MIN)
                    return INT_MIN;
            }
        if(flag==-1)
            a=-1*a;
        return a;
    }
};