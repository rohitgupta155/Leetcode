class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        unordered_map<int,int> a;
        for(int i=0;i<nums.size()-1;i++)
            a[nums[i]+nums[i+1]]++;
        for(auto i:a)
            if(i.second>1)
                return true;
        return false;
    }
};