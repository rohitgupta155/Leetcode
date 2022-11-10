class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        int c=0,s=0;
        for (int i:nums)
        {
           s+=i;
            if(s==k)
                c++;
            if(m.count(s-k))
                c+=m[s-k];
            m[s]++;
        }
        return c;
    }
};