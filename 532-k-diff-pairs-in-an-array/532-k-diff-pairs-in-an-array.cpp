class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        for(int i:nums)
            m[i]++;
        int c=0;
        for(auto i:m)
        {
            if(k==0)
                {if(i.second>1)
                c++;}
            else if(m.count(k+i.first))
                c++;
        }
        return c;
    }
};