class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        int i=0,j=m-1,c=0;
        while(i<n&&j>=0)
        {
            if(grid[i][j]>=0)
                       {
                       i++;
                       j=m-1;
            }
           else{
               cout<<i<<" "<<j<<" "<<grid[i][j]<<endl;
               j--;
               c++;
           }
            if(j==-1)
            {
                i++;
                j=m-1;
            }
        
                       }
                       return c;
                       }
};