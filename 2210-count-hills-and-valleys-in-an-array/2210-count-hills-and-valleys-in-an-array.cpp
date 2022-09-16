class Solution {
public:
    int countHillValley(vector<int>& nums) {
        stack<int> q;
        int n=nums.size(),v=0,h=0;
        q.push(nums[0]);
        for(int i=1;i<n;i++)
        {
            if(q.top()!=nums[i])
                q.push(nums[i]);
        }
        nums.clear();
        while(!q.empty())
        {
            int t=q.top();
            nums.push_back(t);
            q.pop();
        }
        for(auto i:nums)
            cout<<i<<" ";
        n=nums.size();
        for(int i=n-2;i>=1;i--)
        {
            if(nums[i]<nums[i+1]&&nums[i]<nums[i-1])
                h++;
            else if(nums[i]>nums[i+1]&&nums[i]>nums[i-1])
                v++;
        }
        
        return v+h;
            
    }
};