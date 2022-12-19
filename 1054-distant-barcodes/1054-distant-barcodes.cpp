class Solution {
public:
    vector<int> rearrangeBarcodes(vector<int>& b) {
        unordered_map<int,int> m;
        set<pair<int,int>> s;
        for(auto i:b)
            m[i]++;
        int j=b.size()-2;
        for(auto i:m)
          s.insert({i.second,i.first});
        for(auto i:s)
        {
            for(;j>=0&&m[i.second]>0;)
               { b[j]=i.second;
               m[i.second]--;
                j-=2;
            if(j<0)
                j=b.size()-1;}
        }
        return b;
    }
};