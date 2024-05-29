class Solution {
public:
    string x;
    int numSteps(string s) {
        int steps=0;
        while(s.size()>0)
        {
            if(s.size()==1&&x.size()==0)
                break;
            if(s.back()=='0')
                s.pop_back();
            else
                add(s);
            steps++;
         }
        
        while(x.size()>1)
        {
            if(x.back()=='0')
                x.pop_back();
            else
                add(x);
            steps++;
        }
        return steps;
    }
    void add(string &s)
    {
        int rem=0;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]=='0')
            {
                rem=0;
                s[i]='1';
                break;
            }
            else{
                s[i]='0';
                rem=1;
            }            
        }
        if(rem)
            x='1'+x;
    }
};