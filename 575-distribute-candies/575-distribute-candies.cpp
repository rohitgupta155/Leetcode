class Solution {
public:
    int distributeCandies(vector<int>& c) {
        unordered_map<int,int> t;
        for(auto i:c)
            t[i]++;
        if(c.size()/2>t.size())
            return t.size();
        return c.size()/2;
    }
};