class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int c=INT_MAX,d=INT_MAX;
        for(int i:nums)
        {
            if(i<c)
                c=i;
            if(c<i&&i<d)
                d=i;
            else if(d<i)
                return true;
        }
        return false;
    }
};