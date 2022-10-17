class Solution {
public:
    bool findRotation(vector<vector<int>>& m, vector<vector<int>>& target) {
        if(m==target)
            return true;
        int n=m.size();
        for(int k=0;k<3;k++){
        for(int i=0;i<n;i++)
            for(int j=i+1;j<n;j++)
                swap(m[i][j],m[j][i]);
        for(int i=0;i<n/2;i++)
            for(int j=0;j<n;j++)
                swap(m[j][i],m[j][n-i-1]);
            
        if(m==target)return true;
        }
        return false;
    }
};