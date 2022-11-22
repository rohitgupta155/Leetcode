class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=2;
        int n=nums.size();
        if(n<2)
            return n;
        for(int i=2;i<n;i++)
        {
            if(nums[k-2]!=nums[i])
            {
                nums[k++]=nums[i];
            }
        }
        return k;
    }
};