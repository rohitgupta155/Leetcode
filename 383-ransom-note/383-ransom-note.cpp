class Solution {
public:
    bool canConstruct(string r, string m) {
        int a[26],b[26],n=r.size(),s=m.size();
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));
        for(int i=0;i<n;i++)
            a[r[i]-97]++;
    for(int i=0;i<s;i++)
            b[m[i]-97]++;
        
        for(int i=0;i<n;i++)
        {
            if(a[r[i]-97]>b[r[i]-97])
                return false;
        }
        return true;
    
    }
};