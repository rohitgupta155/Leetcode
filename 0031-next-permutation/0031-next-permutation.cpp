class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        // int n=nums.size();
        // int f=1;
        // for(int i=n-1;i>0;i--)
        // {
        //     if(nums[i-1]<nums[i])
        //        {if(i==1)
        //           {reverse(nums.begin(),nums.end()-1);
        //            reverse(nums.begin(),nums.end());
        //            }
        //          else{
        //         swap(nums[i],nums[i-1]);
        //          swap(nums[i],nums[n-1]);}
        //         f=0;
        //           break;}
        // }
        // if(f)
        // sort(nums.begin(),nums.end());
        next_permutation(nums.begin(),nums.end());
    }
};