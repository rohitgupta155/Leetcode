class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int m) {
        int a=0,n=pow(2,m)-1;
        for(auto i:nums)
            a^=i;
        vector<int> ans;
        for(int i=1;i<=nums.size();i++){
            // int t=1,curr=0,temp=a;
            // while(t<=n)
            // {
            //     if(temp%2==0)
            //         curr^=t;
            //     t<<=1;
            //     temp>>=1;
            // }
            // ans.push_back(curr);  //what i thought of...its working stil...
            ans.push_back(n^a); //faster one
            a^=nums[nums.size()-i];
        }
        return ans;
    }
};