class Solution {
public:
    int nearestValidPoint(int a, int b, vector<vector<int>>& p) {
        int d=INT_MAX,in;
        for(int i=0;i<p.size();i++)
        {
            if(p[i][0]==a||p[i][1]==b)
            {
                int dis=abs(p[i][0]-a)+abs(p[i][1]-b);
                if(dis<d)
                {
                    d=dis;
                    in=i;
                }
            }
        }
        return d==INT_MAX?-1:in;
    }
};