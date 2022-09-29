class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        unordered_map<int,int>m;
        for(int i:nums)
            m[i]++;
        int n=nums.size(),c=0;
        for(int i=0;i<n;i++)
        {
            int a=diff+nums[i];
            int b=diff+a;
            if(m[a]&&m[b])
                c++;
        }
        return c;
    }
};