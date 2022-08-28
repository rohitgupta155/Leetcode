class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        if(k==1)
            return 0;
        sort(nums.begin(),nums.end());
        int m=INT_MAX;
        for(int i=0;i<nums.size()-k+1;i++)
           {
            m=min(m,nums[i+k-1]-nums[i]);
            cout<<m<<" ";
        }
        return m;
            
    }
};