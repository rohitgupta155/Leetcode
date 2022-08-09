class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int p=0;
        int l=nums.back();
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]!=nums[p])
            {
                p++;
                nums[p]=nums[i];
            }
            if(nums[i]==l)
                break;
        }
        return p+1;
    }
};