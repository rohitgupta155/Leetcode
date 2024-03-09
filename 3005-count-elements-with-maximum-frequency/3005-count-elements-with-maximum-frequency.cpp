class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> m;
        for(auto i:nums)
        {
            m[i]++;
        }
        int ma=INT_MIN;
        for(auto i:m)
        {
            ma=max(ma,i.second);
        }
        int ans=0;
        for(auto i:m)
        {
            if(i.second==ma)
                ans+=ma;
        }
        return ans;
    }
};