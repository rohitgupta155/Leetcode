class Solution {
public:
    vector<int> findOriginalArray(vector<int>& c) {
       if(c.size()%2==1)
           return {};
        sort(c.begin(),c.end());
       map<int,int> a;
        for(auto i:c)
            a[i]++;
        vector<int> m;
        for(auto k:c)
        {
            if(a[k]==0)
                continue;
            if(a[k*2]==0)
                return {};
                m.push_back(k);
                a[k]--;
                a[k*2]--;
        }
        return m;
    }
};