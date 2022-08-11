class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size(),z=0,j=0;
        
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
            {
                z++;
            }
            else{
                nums[j++]=nums[i];
            }
        }
        for(int i=0;i<z;i++)
            nums[j++]=0;
    }
};