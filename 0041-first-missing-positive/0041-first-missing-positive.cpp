class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int> s;
        for(int i=0;i<nums.size();i++)
        {
            s.insert(nums[i]);
        }
        for(int i=1;i<100000;i++)
        {
            if(s.find(i)==s.end())
                return i;
        }
        return 100001;
    }
};