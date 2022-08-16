class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& m) {
        int n=m.size(),sum=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++){

                if((i==j||(n-j-1)==i)){
                    if(m[i][j]==0)
                    return false;}
                
                else if(m[i][j]!=0)
                    {return false;}
            }
        }
        return true;
    }
};