class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        if(nums.size()==1)
            return {0};
        vector<int> l(nums.size(),0),r(nums.size(),0);
        l[0]=nums[0];
        r[nums.size()-1]=nums.back();
        for(int i=1;i<nums.size();i++)
        {
            l[i]=nums[i]+l[i-1];
            r[nums.size()-i-1]=nums[nums.size()-i-1]+r[nums.size()-i];
        }
        for(int i=1;i<nums.size()-1;i++)
        {
            nums[i]=abs(l[i-1]-r[i+1]);
        }
        nums[0]=r[1];
        nums[nums.size()-1]=l[nums.size()-2];
        return nums;
    }
};