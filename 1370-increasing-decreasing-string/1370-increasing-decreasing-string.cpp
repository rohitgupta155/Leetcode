class Solution {
public:
    string sortString(string s) {
        int c[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
        for(auto i:s)
            c[i-'a']++;
        int n=s.size();
        string ans;
        while(n)
        {
            for(int i=0;i<26&&n>0;i++)
            {
                if(c[i]>0)
                {
                    ans+=(i+'a');
                    c[i]--;
                    n--;
                }
            }          
            for(int i=25;i>=0&&n>0;i--)
            {
                if(c[i]>0)
                {

                    ans+=(i+'a');
                    c[i]--;
                    n--;
                }
            }
        }
        return ans;
        
    }
};