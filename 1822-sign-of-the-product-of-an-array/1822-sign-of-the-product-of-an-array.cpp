class Solution {
public:
    int arraySign(vector<int>& nums) {
        int n=0;
        for(auto i:nums)
        {
            if(i==0)
                return 0;
            else if(i<0)
                n++;
        }
        if(n%2==1)
            return -1;
        return 1;
    }
};