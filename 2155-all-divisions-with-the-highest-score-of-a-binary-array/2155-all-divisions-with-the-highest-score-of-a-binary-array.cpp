class Solution {
public:
    vector<int> maxScoreIndices(vector<int>& nums) {
        int sum=accumulate(nums.begin(),nums.end(),0);
        unordered_map<int,vector<int>>m;
        m[sum].push_back(0);
        int z=0,ma=sum;
        for(int i=0;i<nums.size();i++)
        {
            if(!nums[i])
                {z++;
                }
            else sum-=nums[i];
            m[sum+z].push_back(i+1);
            ma=max(sum+z,ma);
        }
        return m[ma];
    }
};