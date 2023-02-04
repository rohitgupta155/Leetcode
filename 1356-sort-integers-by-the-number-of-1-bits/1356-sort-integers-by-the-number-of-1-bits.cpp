class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        unordered_map<int,int> m,c;
        for(auto i:arr)
        {
            m[i]=__builtin_popcount(i);
            c[i]++;
        }
        vector<pair<int,int>> v;
        for(auto i:m)
        {
            v.push_back({i.second,i.first});
        }
        sort(v.begin(),v.end());
        arr.clear();
        for(auto i:v){
            int k=c[i.second];
            while(k--)
            arr.push_back(i.second);}
        return arr;
    }
};