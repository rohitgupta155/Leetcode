class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        unordered_set<int> s;
        int ans=0;
        for(int i=nums.size()-1;i>=0;i--)
        {
            if(s.size()==k)
                break;
            else if(nums[i]<=k)
                s.insert(nums[i]);
            ans++;
        }
        return ans;
    }
};