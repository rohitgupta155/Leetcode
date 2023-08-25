class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
      sort(nums.begin(),nums.end());
        int z=0,m=INT_MAX;
      for(int i=0;i<nums.size()&&k;i++)
      {
          if(nums[i]<0)
          {
              nums[i]=-nums[i];
              k--;
          }
          else if(nums[i]==0)
              z=1;
          m=min(nums[i],m);
      }
      if(k)
      {
          if(z||k%2==0)
              return accumulate(nums.begin(),nums.end(),0);
          return accumulate(nums.begin(),nums.end(),0)-2*m;
              
      }
        return accumulate(nums.begin(),nums.end(),0);
    }
};