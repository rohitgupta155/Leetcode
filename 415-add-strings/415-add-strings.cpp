class Solution {
public:
    string addStrings(string n1, string n2) {
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