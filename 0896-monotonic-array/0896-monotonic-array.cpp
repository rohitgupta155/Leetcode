class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        if(nums.size()<3)
            return true;
        // int n=nums.size(),c=0;
        // for(int i=0;i<n-1;i++)
        // {
        //     if(nums[i]<=nums[i+1])
        //         c++;
        //         if(c==(n-1))
        //             return true;
        // }
        // c=0;
        // for(int i=0;i<n-1;i++)
        // {
        //     if(nums[i]>=nums[i+1])
        //         c++;
        //         if(c==(n-1))
        //             return true;
        // }
        // return false;
        int i=0;
        while(i<nums.size()-1&&nums[i]==nums[i+1])
            i++;
        if(i>=nums.size()-1)return true;
        bool parity=(nums[i]<nums[i+1]);
        cout<<parity;
        for(;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])continue;
            bool check=(nums[i]<nums[i+1]);
            if(check^parity)
                return false;
        }
        return true;
    }
};