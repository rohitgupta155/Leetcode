class Solution {
public:
    bool bfs(int i,vector<vector<int>> a,vector<int> &c){
        queue<int> q;
        q.push(i);
        c[i]=0;
        while(!q.empty())
        {
            int n=q.front();
            q.pop();
            for(auto i:a[n])
            {
                if(c[i]==c[n])
                    return false;
                if(c[i]==-1){
                    c[i]=1-c[n];
                    q.push(i);}
            }
        }
        return true;
    }
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        vector<vector<int>> a(n+1);
        for(auto i:dislikes)
        {
            a[i[0]].push_back(i[1]);
            a[i[1]].push_back(i[0]);
        }
        vector<int> c(n+1,-1);
        for(int i=1;i<=n;i++)
            if(c[i]==-1)
                if(!bfs(i,a,c))
                    return false;
        return true;
    }
};