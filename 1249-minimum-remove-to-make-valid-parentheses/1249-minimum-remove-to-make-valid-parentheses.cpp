class Solution {
public:
    string minRemoveToMakeValid(string s) {
        string ans1,ans2;
        int c=0;
        for(auto i:s)
        {
            if(i=='(')
            {
                ans1+=i;
                c++;
            }
            else if(i==')')
            {
                if(c){
                    c--;
                    ans1+=i;
                }
            }
            else
                ans1+=i;
        }
        if(c)
        {
            int i=ans1.size()-1;
            string t;
            while(i>=0)
            {
                if(c&&ans1[i]=='(')
                    c--;
                else
                    t+=ans1[i];
                i--;
            }
            reverse(t.begin(),t.end());
            ans1=t;
        }
        for(int i=s.size()-1;i>=0;i--)
        {
            
            if(s[i]==')')
            {
                ans2+=s[i];
                c++;
            }
            else if(s[i]=='(')
            {
                if(c){
                    c--;
                    ans2+=s[i];
                }
            }
            else
                ans2+=s[i];
        }
        if(c)
        {
            int i=ans2.size()-1;
            string t;
            while(i>=0)
            {
                if(c&&ans2[i]==')')
                    c--;
                else
                    t+=ans2[i];
                i--;
            }
            reverse(t.begin(),t.end());
            ans2=t;
        }
        reverse(ans2.begin(),ans2.end());
        // cout<<ans1<<endl<<ans2;
        return ans1.size()<ans2.size()?ans2:ans1;
    }
};