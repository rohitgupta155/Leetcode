class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int> m;
        int sum=0,ans=0;
        for(int i=0;i<nums.size();i++)
        {
            if(!nums[i])
                sum--;
            else
                sum++;
            m[sum]=i;
        }
        sum=0;
        if(m.count(0))
        ans=m[0]+1;
        for(int i=0;i<nums.size();i++)
        {
             if(!nums[i])
                sum--;
            else
                sum++;
            ans=max(ans,m[sum]-i);
        }
        return ans;
    }
};