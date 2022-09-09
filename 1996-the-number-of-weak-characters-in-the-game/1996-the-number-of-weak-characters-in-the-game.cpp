class Solution {
public:
    int numberOfWeakCharacters(vector<vector<int>>& p) {
     sort(p.begin(),p.end());
        int a=p[p.size()-1][0],d=p[p.size()-1][1];
        int m=p[p.size()-1][1],ans=0;
        for(int i=p.size()-1;i>0;i--){
             m=max(m,p[i][1]);
            if(p[i][0]!=a){
               if(p[i][1]<d){
                    ans++;
               }
            }
            if(p[i][0]!=p[i-1][0]){
                d=m;
            }
        }
        if(p[0][1]<d)ans++;
        return ans;
    }
};