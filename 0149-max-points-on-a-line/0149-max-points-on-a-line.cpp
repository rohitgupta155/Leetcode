class Solution {
public:
    int maxPoints(vector<vector<int>>& p) {
        if(p.size()==1)
            return 1;
                int ma=2;
for(int i=0;i<p.size();i++)
        {
            unordered_map<double,int> m;
            for(int j=0;j<p.size();j++)
            {
                if(i!=j){
                m[atan2((p[j][1]-p[i][1]),(p[j][0]-p[i][0]))]++;
               }
            }
        for(auto i:m)
        {
            ma=max(ma,i.second+1);
            
        }}
        return ma;
    }
};