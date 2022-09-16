class Solution {
public:
    vector<int> fairCandySwap(vector<int>& a, vector<int>& b) {
        int as=accumulate(a.begin(),a.end(),0),bs=accumulate(b.begin(),b.end(),0);
        int m=(bs-as)/2;
        unordered_set<int> s;
        for(auto i:b)
            s.insert(i);
        for(auto i:a)
        {
            if(s.find(i+m)!=s.end())
                return {i,i+m};
        }
        return {};
        
    }
};