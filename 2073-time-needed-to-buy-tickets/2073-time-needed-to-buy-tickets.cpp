class Solution {
public:
    int timeRequiredToBuy(vector<int>& t, int k) {
        queue<pair<int,int>> q;
        for(int i=0;i<t.size();i++)
            q.push({t[i],i});
        int ans=0;
        while(!q.empty())
        {
            ans++;
            if(q.front().second==k&&q.front().first==1)
                return ans;
            if(q.front().first==1)
             {
                q.pop();
                continue;
            }
            q.push({q.front().first-1,q.front().second});
            q.pop();
        }
        return 1;
    }
};