class Solution {
public:
    bool parseBoolExpr(string e) {
         stack<char> s;
        for(auto i:e)
        {
            if(i=='!'||i=='&'||i=='|'||i=='f'||i=='t')
                s.push(i);
            else if(i==')'){
            bool t=false,f=false;
            while(s.top()!='&'&&s.top()!='|'&&s.top()!='!')
            {
                char a=s.top();
                s.pop();
                t=(a=='t')|t;
                f=(a=='f')|f;
            }
                char ex=s.top();
                s.pop();
                if(ex=='!')
                    s.push(t?'f':'t');
                else if(ex=='&')
                    s.push(f?'f':'t');
                else
                    s.push(t?'t':'f');
            }
        }
        return s.top()=='t';
    }
};