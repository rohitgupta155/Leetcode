class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        vector<vector<int>> a(img.size(),vector<int>(img[0].size(),0));
        for(int l=0;l<img.size();l++)
        {
            for(int m=0;m<img[0].size();m++)
            {
                int s=0;
                for(int i=l-1;i<l+2;i++)
                    for(int j=m-1;j<m+2;j++)
                {
                        if(i>=0&&j>=0&&i<img.size()&&j<img[0].size())
                            {a[l][m]+=img[i][j];
                             s++;}
                    }
                a[l][m]/=s;
            }
        }
        return a;
    }
};