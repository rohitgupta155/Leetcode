class Solution {
public:
    int minimumLines(vector<vector<int>>& p) {
        if(p.size()==1)
            return 0;
        int s=0,c=1,n=p.size();
        sort(p.begin(),p.end());
        for(int i=2;i<n;i++)
        {
            long long int d1=(long)(p[i][1]-p[i-1][1])*(long)(p[i-1][0]-p[i-2][0]),d2=(long)(p[i-1][1]-p[i-2][1])*(long)(p[i][0]-p[i-1][0]);
            if(d1!=d2)
            {
                c++;
            }
            
        }
        return c;
    }
};