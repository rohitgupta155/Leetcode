class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& i1, vector<vector<int>>& i2) {
        map<int,int> m;
        for(int i=0;i<i1.size();i++)
            m[i1[i][0]]=i1[i][1];
        for(int i=0;i<i2.size();i++)
            m[i2[i][0]]+=i2[i][1];
        i1.clear();
        for(auto i:m)
            i1.push_back({i.first,i.second});
            return i1;
    }
};