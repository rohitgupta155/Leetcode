class Solution {
public:
    bool check(vector<int>& nums) {
        vector<int> a=nums;
        sort(a.begin(),a.end());
        for(int i=0;i<nums.size();i++)
        {
            if(a==nums)
                return true;
            int b=a[0];
            a.erase(a.begin());
            a.push_back(b);
        }
        return false;
    }
};