class Solution {
public:
    int maximumBags(vector<int>& c, vector<int>& r, int a) {
        vector<int> re(r.size());
        int f=0;
        for(int i=0;i<r.size();i++)
        {
            re[i]=c[i]-r[i];
        }
        sort(re.begin(),re.end());
        for(int i:re)
            if(a>=i)
                a-=i,f++;
        else break;
        return f;
    }
};