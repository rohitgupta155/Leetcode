class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        map<vector<int>,int>m;
        for(auto i:dominoes)
        {
            if(i[0]>i[1])
                m[{i[1],i[0]}]++;
            else m[i]++;
        }
        int sum=0;
        for(auto i:m)
        {
            if(i.second>1)
            {
                sum+=i.second*(i.second-1)/2;
            }
        }
        return sum;
    }
};