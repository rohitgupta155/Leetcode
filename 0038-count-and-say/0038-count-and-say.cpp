class Solution {
public:
    string countAndSay(int n) {
        string a="1";
        
        for(int i=2;i<=n;i++)
        {
            int c=1;
            string b;
            for(int j=1;j<a.size();j++)
            {
                if(a[j]==a[j-1])
                    c++;
                else {b=b+to_string(c)+a[j-1];
                     c=1;}
            }
            b=b+to_string(c)+a.back();
            a=b;
        }
        return a;
    }
};