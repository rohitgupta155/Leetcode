class Solution {
public:
    long long mostPoints(vector<vector<int>>& q) {
        vector<long long> d(q.size(),0);
        d[d.size()-1]=q.back()[0];
        for(int i=d.size()-2;i>=0;i--)
        {
            d[i]=q[i][0];
            if(i+q[i][1]+1<d.size())
                d[i]+=d[i+q[i][1]+1];
            d[i]=max(d[i],d[i+1]);
        }
        return d[0];
    }
};