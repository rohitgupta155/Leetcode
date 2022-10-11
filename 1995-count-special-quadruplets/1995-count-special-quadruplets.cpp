class Solution {
public:
    int countQuadruplets(vector<int>& nums) {
        unordered_map<int,int> m;
        int c=0,n=nums.size();
        m[nums[n-1]]++;
        for(int i=n-2;i>=0;i--){
            for(int j=i-1;j>=0;j--)
                for(int k=j-1;k>=0;k--)
                        c+=m[nums[i]+nums[j]+nums[k]];
        m[nums[i]]++;}
        return c;
    }
};