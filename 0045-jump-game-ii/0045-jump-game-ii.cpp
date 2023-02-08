class Solution {
public:
    int jump(vector<int>& nums) {
        int j=0,k=0,ans=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            k=max(k,i+nums[i]);
            if(i==j)
            {
                ans++;
                j=k;
            }
        }
        return ans;
        
    }
};