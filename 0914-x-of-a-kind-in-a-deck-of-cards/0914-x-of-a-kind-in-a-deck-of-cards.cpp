class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int,int> m;
        for(auto i:deck)
        {
            m[i]++;
        }
        int c=m[deck[0]];
        for(auto i:m)
        {
            c=__gcd(c,i.second);
        }
        return c>=2;
    }
};