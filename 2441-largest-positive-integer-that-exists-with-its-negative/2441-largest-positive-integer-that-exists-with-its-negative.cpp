class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_map<int,int> m;
        int ans=-1;
        for(auto i:nums){
            m[i]++;
            }
        for(auto i:m)
        {
            if(i.first>0&&m.count(-i.first))
                ans=max(ans,i.first);
        }
        return ans;
        
    }
};