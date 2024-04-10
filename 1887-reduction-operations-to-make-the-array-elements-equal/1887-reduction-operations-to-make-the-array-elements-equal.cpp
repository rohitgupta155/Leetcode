class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        map<int,int> m;
        for(auto i:nums)
            m[i]++;
        int ans=0,count=0;
        while(m.size()>1)
        {
            count+=m.rbegin()->second;
            ans+=count;
            m.erase(m.rbegin()->first);
        }
        return ans;
    }
};