class Solution {
public:
    int diagonalSum(vector<vector<int>>& m) {
        if(m.size()==1)
            return m[0][0];
        if(m.size()==2)
            return m[0][0]+m[0][1]+m[1][1]+m[1][0];
        int n=m.size(),sum=0;
        for(int i=0;i<n;i++)
        {
            sum=sum+m[i][i]+m[i][n-i-1];
        }
        if(n%2==1)
            sum-=m[n/2][n/2];
        return sum;
    }
};