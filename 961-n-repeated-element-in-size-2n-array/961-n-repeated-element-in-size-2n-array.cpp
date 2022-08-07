class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n=nums.size()/2;
        unordered_map<int,int> m;
        for(int i:nums)
            m[i]++;
        for(auto i:m)
            if(i.second==n)
                return i.first;
        return -1;
    }
};