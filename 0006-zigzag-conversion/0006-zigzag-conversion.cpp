class Solution {
public:
    string convert(string s, int r) {
        if(r==1)
            return s;
        vector<string> a(r);
        int c=0,f=1;
        for(auto i:s){
            if(f)
                {a[c++]+=i;
                 if(c==r-1)
                     f=0;
    }
            else   {a[c--]+=i;
                 if(c==0)
                     f=1;
    }}
        string ans;
        for(auto i:a)ans+=i;
        return ans;}
};