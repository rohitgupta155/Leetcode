class Solution {
public:
    int minimumTime(int n, vector<vector<int>>& relations, vector<int>& time) {
        unordered_map<int,vector<int>> m;
        vector<int> in(n,0);
        for(auto i:relations){
            m[i[0]-1].push_back(i[1]-1);
            in[i[1]-1]++;
        }
        queue<int> q;
        vector<int> maxtime(n,0);
        for(int i=0;i<n;i++)
            if(in[i]==0)
                {maxtime[i]=time[i];
                q.push(i);}
        while(!q.empty())
        {
            int curr=q.front();
            q.pop();
            for(auto i:m[curr])
            {
                maxtime[i]=max(maxtime[curr]+time[i],maxtime[i]);
                in[i]--;
                if(in[i]==0)
                    q.push(i);
            }
        }
        return *max_element(maxtime.begin(),maxtime.end());        
    }
};