class Solution {
public:
    int minJumps(vector<int>& arr) {
        unordered_map<int,vector<int>> m;
        for(int i=0;i<arr.size();i++)
            m[arr[i]].push_back(i);
        queue<int> q;
        q.push(0);
        int steps=0;
        vector<bool> vis(arr.size(),false);
        while(!q.empty())
        {
            int s=q.size();
            
            while(s--)
            {
                int curr=q.front();
                q.pop();
                if(curr==arr.size()-1)
                    return steps;
                if(curr-1>=0&&!vis[curr-1])
                {
                    vis[curr-1]=true;
                    q.push(curr-1);
                }
                if(curr+1<arr.size()&&!vis[curr+1])
                {
                    vis[curr+1]=true;
                    q.push(curr+1);
                }
                for(auto i:m[arr[curr]])
                {
                    if(!vis[i])
                    {
                        vis[i]=true;
                        q.push(i);
                    }
                }
                m.erase(arr[curr]);
                
            }
            steps++;
        }
        return steps;
        
    }
};