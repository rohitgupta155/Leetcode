class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        int a=1,l=points[0][1];
        for(auto &i:points)
        {
            if(i[0]>l)
                l=i[1],a++;
            l=min(i[1],l);
        }
        return a;
        
    }
};