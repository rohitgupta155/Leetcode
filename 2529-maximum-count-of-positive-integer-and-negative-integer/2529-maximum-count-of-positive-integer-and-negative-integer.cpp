class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int l=0,r=nums.size()-1,z=0;
        while(l<r)
        {
            int m=(l+r)/2;
            if(nums[m]>=0)
                r=m;
            else l=m+1;
        }
        
        for(int i=l;i<nums.size();i++)
        {
            if(nums[i]!=0)
              break;
            z++;
        }
        int n=nums.size();
        return max(n-l-z,l); 
    }
};