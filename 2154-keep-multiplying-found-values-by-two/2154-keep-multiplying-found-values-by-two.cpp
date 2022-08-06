class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        set<int> s(nums.begin(),nums.end());
        while(s.find(original)!=s.end())
        {
            original*=2;
        }
        return original;
    }
};