class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        int r=maze.size(),c=maze[0].size();
        vector<pair<int,int>> d={{1,0},{-1,0},{0,1},{0,-1}};
        int s=entrance[0],e=entrance[1];
        maze[s][e]='+';
        queue<vector<int>> q;
        q.push({s,e,0});
        while(!q.empty())
        {
           int cr=q.front()[0],cc=q.front()[1],cd=q.front()[2];
            q.pop();
            for(auto i:d)
            {
                int nr=cr+i.first,nc=cc+i.second;
                if(0<=nr&&nr<r&&0<=nc&&nc<c&&maze[nr][nc]=='.'){
                    if(nr==0||nr==r-1||nc==0||nc==c-1)
                        return cd+1;
                    maze[nr][nc]='+';
                    q.push({nr,nc,cd+1});
                }
            }
        }
    return -1;}
};