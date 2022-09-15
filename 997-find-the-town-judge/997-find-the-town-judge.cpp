class Solution {
public:
    int findJudge(int n, vector<vector<int>>& t) {
        int tu[n+1],ti[n+1];
                memset(tu,0,(n+1)*sizeof(int));
             memset(ti,0,(n+1)*sizeof(int));
        for(auto i:t)
           { tu[i[0]]++;
            ti[i[1]]++;}
        for(int i=1;i<=n;i++)
            if(tu[i]==0&&ti[i]==(n-1))
              return i;
        
        return -1;
        
    }
};