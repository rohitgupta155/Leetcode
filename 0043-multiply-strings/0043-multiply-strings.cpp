class Solution {
public:
    string multiply(string n1, string n2) {
       if(n1=="0"||n2=="0")
           return "0";
       int n=n1.size(),m=n2.size();
        string ans="",end="";
        
        while(m--)
        {
            string toadd=mult(n1,n2[m])+end;
            ans=add(ans,toadd);
            end+="0";
        }
        return ans;
    }
    string mult(string a,char b)
    {
        int n=b-'0',s=a.size(),r=0;
        string ans;
        while(s--)
        {
            int t=(a[s]-'0')*n+r;
            ans+=to_string(t%10);
            r=t/10;
        }
        if(r)
        {
             ans+=to_string(r);
            }
        reverse(ans.begin(),ans.end());
        return ans;
    }
    string add(string n1,string n2)
    {
        string a;
        int n=n1.size(),m=n2.size();
        int i=n-1,j=m-1,r=0;
        while(i>=0&&j>=0)
        {
            int s=n1[i--]+n2[j--]-'0'-'0'+r;
            r=s/10;
            a=to_string(s%10)+a;
        }
        if(i>=0)
        {
            while(i>=0)
            {
                int s=n1[i--]-'0'+r;
            r=s/10;
            a=to_string(s%10)+a;
            }
        }  
        if(j>=0)
        {
            while(j>=0)
            {
                int s=n2[j--]-'0'+r;
            r=s/10;
            a=to_string(s%10)+a;
            }
        }
        if(r)
            a=to_string(r)+a;
        return a;
    }
};