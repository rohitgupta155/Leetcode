class Solution {
public:
    string interpret(string c) {
        string ans,t="";
        for(int i=0;i<c.size();i++)
        {
            if(c[i]=='G')
                ans+='G';
            else{
                while(c[i]!=')')
                    i++,t+=c[i];
                if(t=="al)")
                    ans+="al";
                else ans+="o";
                t="";
            }
        }
        return ans;
    }
};