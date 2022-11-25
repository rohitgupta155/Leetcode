class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        unordered_set<float> s;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n/2;i++)
        {
            s.insert((nums[i]+nums[n-i-1])*1.0/2);
        }
        return s.size();
    }
};