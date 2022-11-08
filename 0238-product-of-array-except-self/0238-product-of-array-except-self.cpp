class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int p=1,z=0;
        for(int i:nums)
        {
            if(i!=0)
                p*=i;
            else z++;
        }
        if(z==1)
        {
            for(int i=0;i<nums.size();i++)
            {
                nums[i]!=0?nums[i]=0:nums[i]=p;
            }
        }
        else if(z==0){
            for(int i=0;i<nums.size();i++)
            {
                nums[i]=p/nums[i];
            }
        }
        else {
             for(int i=0;i<nums.size();i++)
            {
                nums[i]=0;
            }
        }
        return nums;
        
    }
};