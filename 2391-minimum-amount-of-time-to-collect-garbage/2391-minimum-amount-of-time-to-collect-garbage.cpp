class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        unordered_map<char,int> v;
        int m=0,p=0,g=0;
        for(int i=0;i<garbage.size();i++)
        {
            unordered_set<char> s(garbage[i].begin(),garbage[i].end());
            if(s.find('M')!=s.end())
                m=i;
            if(s.find('P')!=s.end())
                p=i;
            if(s.find('G')!=s.end())
                g=i;
            for(auto j:garbage[i])
                v[j]++;
        }
        int sum=v['M']+v['P']+v['G'];
        if(m)
        sum+=accumulate(travel.begin(),travel.begin()+m,0);
        if(p)
        sum+=accumulate(travel.begin(),travel.begin()+p,0);
        if(g)
        sum+=accumulate(travel.begin(),travel.begin()+g,0);
        return sum;
    }
};