class Solution {
public:
    char slowestKey(vector<int>& r, string k) {
        int a=r[0];
        char b=k[0];
        for(int i=1;i<r.size();i++)
        {
            if(a<r[i]-r[i-1])
            {
                a=r[i]-r[i-1];
                b=k[i];
            }
            else  if(a==(r[i]-r[i-1]))
            {
                b=max(b,k[i]);
            }
        }
        return b;
        
    }
};