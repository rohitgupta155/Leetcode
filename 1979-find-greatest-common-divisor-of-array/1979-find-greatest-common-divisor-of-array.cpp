class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mi=INT_MAX,ma=INT_MIN;
        for(int i:nums)
        {
            mi=min(mi,i);
            ma=max(ma,i);
        }
        return gcd(ma,mi);
    }
    int gcd(int a,int b)
    {
        if (b == 0)
   return a;
   return gcd(b, a % b);
    }
};