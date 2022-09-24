class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
         vector<int> rs,cs;
        int n=mat.size(),m=mat[0].size();
        for(int i=0;i<n;i++){
            int rsum=0;
            for(int j=0;j<m;j++)
            {
                rsum+=mat[i][j];
            }
            rs.push_back(rsum);
        }
        for(int i=0;i<m;i++){
            int csum=0;
            for(int j=0;j<n;j++)
            {
                csum+=mat[j][i];
            }
            cs.push_back(csum);
        }
        int a=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)
            {
                if(mat[i][j]==1&&rs[i]==1&&cs[j]==1)
                    a++;
            }
        }
        return a;                 
    }
};