class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<long long> n;
        n.push_back(nums[0]);
        for(int i=1;i<nums.size();i++)
        {
            n.push_back(nums[i]+n.back());
        }
        
        for(int i=nums.size()-1;i>=2;i--)
        {
            if(nums[i]<n[i-1])
                return nums[i]+n[i-1];
        }
        return -1;
    }
};