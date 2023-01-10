class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& p, int k) {
        priority_queue<pair<double,int>,vector<pair<double,int>>,greater<pair<double,int>>> pq;
        for(int i=0;i<p.size();i++)
        {
            double s=sqrt(p[i][0]*p[i][0]+p[i][1]*p[i][1]);
            pq.push({s,i});
        }
        vector<vector<int>>ans;
        int j=0;
        while(!pq.empty()){
            ans.push_back(p[pq.top().second]);
            pq.pop();
         j++;
        if(j==k)
            break;}
        return ans;
    }
};