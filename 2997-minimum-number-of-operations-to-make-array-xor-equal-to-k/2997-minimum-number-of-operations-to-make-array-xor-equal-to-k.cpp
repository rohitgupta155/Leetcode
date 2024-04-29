class Solution {
public:
    void takeout(int n,vector<int> &v)
    {
        int i=31;
        while(n)
        {
            v[i]+=(n%2);
            n/=2;
            i--;
        }
    }
    int minOperations(vector<int>& nums, int k) {
        // vector<int> v(32,0),r(32,0);
        // for(auto i:nums)
        // {
        //     takeout(i,v);
        // }
        // takeout(k,r);
        // int ans=0;
        // for(int i=0;i<32;i++)
        // {
        //     if(v[i]%2!=r[i]%2)
        //         ans++;
        // }
        // return ans;
        for(auto i:nums)
            k=k^i;
        return __builtin_popcount(k);
    }
};