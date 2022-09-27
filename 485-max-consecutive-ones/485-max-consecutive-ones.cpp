class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int c=0,ans=0;
        for(int i:nums)
        {
            if(i)
                c++;
            else {ans=max(ans,c);
                 c=0;}
        }
        ans=max(ans,c);
        return ans;
    }
};