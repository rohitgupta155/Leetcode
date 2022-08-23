class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        queue <int> p,n;
        int s=nums.size();
        for(int i=0;i<s;i++)
        {
            if(nums[i]<0)
                n.push(nums[i]);
            else p.push(nums[i]);
        }
        for(int i=0;i<s;i+=2)
        {
            nums[i]=p.front();
            nums[i+1]=n.front();
            p.pop();n.pop();
        }
        return nums;
    }
    
};