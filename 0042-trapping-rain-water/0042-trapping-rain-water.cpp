class Solution {
public:
    int trap(vector<int>& h) {
       vector<int> r(h.size()),l(h.size());
        r[0]=h[0];
        l.back()=h.back();
        for(int i=1;i<h.size();i++)
        {
            r[i]=max(h[i],r[i-1]);
            l[h.size()-i-1]=max(h[h.size()-i-1],l[h.size()-i]);
        }
        int ans=0;
        for(int i=0;i<h.size();i++)
        {
            ans+=min(l[i]-h[i],r[i]-h[i]);
        }
        return ans;
    }
};