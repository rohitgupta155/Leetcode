class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n=image.size();
        for(int i=0;i<n/2;i++)
            for(int j=0;j<n;j++)
                {swap(image[j][i],image[j][n-i-1]);
}        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                image[i][j]==1?image[i][j]=0:image[i][j]=1;
        return image;
        
    }
};