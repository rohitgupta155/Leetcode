class Solution {
public:
    int minDeletion(vector<int>& nums) {
        int n=nums.size(),c=0;
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]==nums[i+1]&&!((i-c)&1))
                {c++;
            }
        }
        if((n-c)%2)
            c++;
        return c;
    }
};