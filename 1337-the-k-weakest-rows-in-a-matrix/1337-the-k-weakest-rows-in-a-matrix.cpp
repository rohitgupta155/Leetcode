class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>> sum;
        vector <int> a;
        for(int i=0;i<mat.size();i++)
        sum.push_back(make_pair(accumulate(mat[i].begin(),mat[i].end(),0),i));
               sort(sum.begin(),sum.end());
        for(int i=0;i<k;i++)
            a.push_back(sum[i].second);
        return a;
        
    }
};