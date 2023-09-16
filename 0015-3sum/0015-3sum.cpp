class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
         unordered_map<int,int>m;
        int j=0,n=nums.size();
        for(int i=0;i<n;i++)
            m[nums[i]]=i;
        vector<vector<int>>ans;
        for(int i=0;i<n;i++){
            for(int k=i+1;k<n;k++)
            {
                if(i!=k)
                {
                    int s=nums[i]+nums[k];
                    if(m.count(-s)&&k<m[-s])
                        {ans.push_back({nums[i],nums[k],-s});
                        k=m[nums[k]];}
                }
            }
        i=m[nums[i]];}        
        return ans;
    }
};