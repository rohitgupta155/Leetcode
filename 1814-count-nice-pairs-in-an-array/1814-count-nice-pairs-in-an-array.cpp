class Solution {
public:
    int countNicePairs(vector<int>& nums) {
        unordered_map<int,long long > m;
        long long c=0;
        for(int i:nums)
        {
            string a=to_string(i);
            reverse(a.begin(),a.end());
            int b=stoi(a);
            m[i-b]++;
        }
        for(auto i:m)
        {
            if(i.second>1)
            {
                c+=((i.second*(i.second-1))/2);
            }
        }
        return c%1000000007;
    }
};