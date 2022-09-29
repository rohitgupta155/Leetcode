class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
       int mi=nums[0],n=nums.size();
         
        for(int i=0;i<n;i++)
        {
            if(abs(nums[i])<abs(mi))
            {
                mi=nums[i];
                
            }
            if(abs(nums[i])==abs(mi))
            {
                mi=max(mi,nums[i]);
            }            
        }
        return mi;
        
    }
};