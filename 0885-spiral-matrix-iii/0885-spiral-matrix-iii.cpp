class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int i, int j) {
        vector<vector<int>> ans;
        int step=1,r=0,c=1;
        while(ans.size()<rows*cols)
        {
            int until=step;
            while(until--){
            if(i>=0&&i<rows&&j>=0&&j<cols)
                ans.push_back({i,j});
            i+=r;
            j+=c;
            }
            change(r,c);
            until=step;
            while(until--){
            if(i>=0&&i<rows&&j>=0&&j<cols)
                ans.push_back({i,j});
            i+=r;
            j+=c;
            }
            change(r,c);
            step++;
        }
        return ans;
    }
    void change(int &i,int &j)
    {
        if(i==0&&j==1)
        {
            i=1;
            j=0;
        }
        else if(i==1&&j==0)
        {
            i=0;
            j=-1;
        }
        else if(i==0&&j==-1)
        {
            i=-1;
            j=0;
        }
        else{
            i=0;
            j=1;
        }
    }
};