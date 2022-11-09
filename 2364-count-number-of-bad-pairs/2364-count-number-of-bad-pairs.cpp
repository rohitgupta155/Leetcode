class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        unordered_map<int,long long> m;
        long long c=0;
        for(int i=0;i<nums.size();i++)
            c+=i-m[i-nums[i]]++;
        return c;
        
    }
};