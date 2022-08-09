class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int p=0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]!=nums[p])
            {
                p++;
                nums[p]=nums[i];
            }
        }
        return p+1;
    }
};