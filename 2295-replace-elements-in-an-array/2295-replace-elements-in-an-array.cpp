class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& o) {
        map<int,int> m;
        int n=nums.size(),k=o.size();
        for(int i=0;i<n;i++)
        {
            m[nums[i]]=i;
        }
        for(int i=0;i<k;i++)
        {
            
            nums[m[o[i][0]]]=o[i][1];
            m[o[i][1]]=m[o[i][0]];
        }
        return nums;
    }
};