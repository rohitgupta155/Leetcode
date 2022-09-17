class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        unordered_map<int,int> m;
        int p=0,l=0;
        for(auto i:nums)
            m[i]++;
        for(auto i:m)
        {    p+=(i.second/2);
            l+=(i.second%2);
        }
        return {p,l};
    }
};