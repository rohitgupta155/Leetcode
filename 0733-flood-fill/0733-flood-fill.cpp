class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if(image[sr][sc]!=color)
            dfs(image,sr,sc,color,image[sr][sc]);
            return image;
    }
    void dfs(vector<vector<int>>& image,int sr, int sc, int color,int old)
    {
        if(image[sr][sc]==old)
        {
            image[sr][sc]=color;
            if(sr>=1)
                dfs(image,sr-1,sc,color,old);
            if(sc>=1)
                dfs(image,sr,sc-1,color,old);
            if(sr+1<image.size())
                dfs(image,sr+1,sc,color,old);
            if(sc+1<image[0].size())
                dfs(image,sr,sc+1,color,old);
        }
    }
};