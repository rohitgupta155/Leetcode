class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        int ans=INT_MIN;
        for(int i=1;i<points.size();i++)
        {
            ans=max(points[i][0]-points[i-1][0],ans);
        }
        return ans;
    }
};