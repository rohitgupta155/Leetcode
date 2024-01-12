class Solution {
public:
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls)     {
        vector<vector<int>> a(m,vector<int>(n,0));
        set<pair<int,int>> s;
        for(auto i:guards)
            s.insert({i[0],i[1]});
        for(auto i:walls)
            s.insert({i[0],i[1]});
        for(auto i:guards)
        {
            int r=i[0]-1,c=i[1];
            while(r>=0&&s.find({r,c})==s.end())
            {
                a[r][c]=1;
                r--;
            }
            r=i[0],c=i[1]+1;
            while(c<n&&s.find({r,c})==s.end())
            {
                a[r][c]=1;
                c++;
            }
            r=i[0],c=i[1]-1;
            while(c>=0&&s.find({r,c})==s.end())
            {
                a[r][c]=1;
                c--;
            }
            r=i[0]+1,c=i[1];
            while(r<m&&s.find({r,c})==s.end())
            {
                a[r][c]=1;
                r++;
            }
        }
        int ans=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++)
               {
                // cout<<a[i][j]<<" ";
                if(s.find({i,j})==s.end()&&a[i][j]==0)
                    ans++;
               }
           // cout<<endl;
        }
        
        return ans;
    }
};