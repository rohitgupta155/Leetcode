class Solution {
public:
    int numberOfBeams(vector<string>& b) {
        int t=0;
        vector<int> v;
        for(int i=0;i<b.size();i++)
        {
            int c=count(b[i].begin(),b[i].end(),'1');
            if(c>0)
                v.push_back(c);
        }
        if(v.size()<2)
            return 0;
        for(int i=1;i<v.size();i++)
        {
            t+=(v[i-1]*v[i]);
        }
        return t;
    }
};