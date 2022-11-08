class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
     int c=0;
     unordered_map<int,int> s;
        for(int i:nums)
        {
           s[i]++;
        }
        for(auto i:s)
        {
            if(i.second>1)
            {
                c+=((i.second*(i.second-1))/2);
            }
        }
        return c;
    }
};