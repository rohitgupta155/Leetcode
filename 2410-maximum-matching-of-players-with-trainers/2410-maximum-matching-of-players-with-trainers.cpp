class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& p, vector<int>& t) {
        int c=0;
        sort(p.begin(),p.end());        
        sort(t.begin(),t.end());
        
        for(int i=0,j=0;i<p.size()&&j<t.size();)
        {
            if(p[i]<=t[j])
            {
                c++,i++,j++;
            }
            else j++;
        }
        return c;

    }
};