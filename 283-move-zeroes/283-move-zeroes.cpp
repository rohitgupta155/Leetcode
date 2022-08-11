class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size(),l=nums.size()-1;
        
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
            {
                nums.erase(nums.begin()+i);
                nums.push_back(0);
                i--;
                l--;
            }
            if(i==l)
                break;
        }
    }
};