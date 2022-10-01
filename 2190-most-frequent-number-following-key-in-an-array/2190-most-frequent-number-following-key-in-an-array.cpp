class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        vector<int> t;
        int n=nums.size();
        for(int i=1;i<n;i++)
        {
            if(nums[i-1]==key)
                t.push_back(nums[i]);
        }
        int m=t.size(),ma=0,ans;
        for(int i=0;i<m;i++)
        {
            int c=0;
            for(int j=1;j<n;j++)
        {
            if(nums[j-1]==key&&nums[j]==t[i])
                c++;
        }
            if(c>ma)
            {ans=t[i];
            ma=c;
            }
        }
        return ans;
    }
};