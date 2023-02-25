class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l=0,r=matrix.size()-1;
        while(l<=r)
        {
            int m=(l+r)/2;
            if(matrix[m][0]>target)
                r=m-1;
            else l=m+1;
        }
        while(l--)
        {
            int left=0,right=matrix[0].size()-1;
            while(left<=right)
        {
            int m=(left+right)/2;
            if(matrix[l][m]==target)
                return true;
            if(matrix[l][m]>target)
                right=m-1;
            else left=m+1;
        }
        }
        return false;
    }
};