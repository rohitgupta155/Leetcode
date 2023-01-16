class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(target<matrix[0][0]||target>matrix[matrix.size()-1][matrix[0].size()-1])
            return false;
        for(int i=0;i<matrix.size();i++)
        {
            if(target<=matrix[i][matrix[0].size()-1])
            for(int j=0;j<matrix[0].size();j++)
            {
                if(target==matrix[i][j])
                {
                    return true;
                }
        }
    }
        return false;
    }
};