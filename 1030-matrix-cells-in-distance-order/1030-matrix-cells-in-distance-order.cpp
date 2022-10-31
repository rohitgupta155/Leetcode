class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int rows, int cols, int rCenter, int cCenter) {
        priority_queue<pair<int,vector<int>>,vector<pair<int,vector<int>>>,greater<pair<int,vector<int>>>> p;
        for(int i=0;i<rows;i++)
            for(int j=0;j<cols;j++)
            {
                vector<int> a={i,j};
                int k=abs(i-rCenter)+abs(j-cCenter);
                p.push(make_pair(k,a));
            }
        vector<vector<int>>a;
       while(!p.empty()){
            a.push_back(p.top().second);
            p.pop();
        }
        return a;
    }
};