class Solution {
public:
    int shipWithinDays(vector<int>& w, int days) {
        int l=*max_element(w.begin(),w.end());
        int r=accumulate(w.begin(),w.end(),0);
        while(l<r)
        {
            int m=(l+r)/2;
            int d=1,c=0;
            for(auto i:w)
            {
                c+=i;
                if(c>m)
                {
                    d++;
                    c=i;
                }
            }
            if(d<=days)
                r=m;
            else l=m+1;
        }
        return l;
    }
};