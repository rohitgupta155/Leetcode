class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        m[0]=1;
        int c=0,s=0;
        for (int i:nums)
        {
           s=(s+i)%k;
            if(s<0)
                s+=k;
                c+=m[s];
            m[s]++;
        }
        return c;
    }
};