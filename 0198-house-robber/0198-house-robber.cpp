class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        int a,b,c;
        a = 0;
        b = nums[0];
        for(int i=1;i<n;i++){
            c = max(a + nums[i] , b);
            a = b;
            b = c;
        }
        return b;
    }
};