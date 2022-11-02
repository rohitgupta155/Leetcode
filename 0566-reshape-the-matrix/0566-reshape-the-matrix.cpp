class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& m, int r, int c) {
        if(r*c!=m.size()*m[0].size())
        return m;
        vector<int> t;
        for(int i=0;i<m.size();i++)
            for(int j=0;j<m[0].size();j++)
                t.push_back(m[i][j]);
        vector<vector<int>> a(r,vector<int>(c));
        int k=0;
        for(int i=0;i<r;i++)
            for(int j=0;j<c;j++)
                a[i][j]=t[k++];
        return a;
    }
};