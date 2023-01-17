class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        string a;
        for(char i:s)
            if(i!='-')
                a+=i;
        int n=a.size(),c=0;
        s.clear();
        for(int i=n-1;i>=0;i--)
        {
            if(a[i]>='a'&&a[i]<='z')
                a[i]=a[i]-32;
            s+=a[i];
            c++;
            if(c==k)
            {
                c=0;
                s+='-';
            }
            
        }
        if(s.back()=='-')
        s.pop_back();
        reverse(s.begin(),s.end());
        return s;
    }
};