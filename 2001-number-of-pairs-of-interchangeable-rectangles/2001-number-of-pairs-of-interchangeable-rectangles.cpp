class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& r) {
        unordered_map<double,long long > m;
        long long c=0;
        for(auto i:r)
        {
            m[(i[0]*1.0)/i[1]]++;
        }
        for(auto i:m)
        {
            if(i.second>1)
            {
                c+=((i.second*(i.second-1))/2);
            }
        }
        return c;
    }
};