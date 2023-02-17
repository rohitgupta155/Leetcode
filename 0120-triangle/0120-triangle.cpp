class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int ans = INT_MAX;
        int levelTotal = triangle.size();
        if (levelTotal == 1)
        {
            return triangle[0][0];
        }
        else if (levelTotal == 2)
        {
            return min(triangle[1][0], triangle[1][1]) + triangle[0][0];
        }
        triangle[1][0] += triangle[0][0];
        triangle[1][1] += triangle[0][0];
        int elems = 3;
        for (int i = 2; i<levelTotal; i++)
        {
            triangle[i][0]+=triangle[i-1][0];
            triangle[i][elems-1]+=triangle[i-1][elems-2];
            for (int j = 1; j<elems-1; j++)
            {
                triangle[i][j] += min(triangle[i-1][j-1], triangle[i-1][j]);
            }
            elems++;
        }
        for (int i = 0; i < elems-1; i++)
        {
            if (triangle[levelTotal-1][i] < ans)
            {
                ans = triangle[levelTotal-1][i];
            }
        }
        return ans;
    }
};