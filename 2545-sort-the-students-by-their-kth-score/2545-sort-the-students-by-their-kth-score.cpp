class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        priority_queue<pair<int,int>> p;
        for(int i=0;i<score.size();i++)
            p.push({score[i][k],i});
        vector<vector<int>> ans;
        while(!p.empty())
        {
            ans.push_back(score[p.top().second]);
            p.pop();
        }
        return ans;
    }
};