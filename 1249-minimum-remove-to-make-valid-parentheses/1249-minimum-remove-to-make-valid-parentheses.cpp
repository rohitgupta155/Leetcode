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
        return ans1;
    }
};