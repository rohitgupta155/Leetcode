class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& p) {
        double area=0.00005;
        int n=p.size();
        for(int i=0;i<n-2;i++)
        {
            double x1=p[i][0],y1=p[i][1];
            for(int j=i+1;j<n-1;j++)
            {
               double x2=p[j][0],y2=p[j][1];
               for(int k=j+1;k<n;k++)
            {
               double x3=p[k][0],y3=p[k][1];
               area=max(area,abs(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2))/2);
            }
            }
        }
        return area;
    }
};