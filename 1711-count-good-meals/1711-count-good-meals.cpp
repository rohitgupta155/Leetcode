class Solution {
public:
    int countPairs(vector<int>& d) {
        unordered_map<int,int> m;
        unordered_set<int> s;
        s.insert(1);
        int j=1,mod=1e9+7;
        for(int i=1;i<22;i++)
            {s.insert(2*j);
            j*=2;
            }
        long c=0;
        for(auto i:d)
        {
            for(auto j:s)
            {
                if(m.count(j-i))
                {
                    c+=m[j-i];
                    c%=mod;
                }
            }
            m[i]++;
        }
        c%=mod;
        return c;
    }
};