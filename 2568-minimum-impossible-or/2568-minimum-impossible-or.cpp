class Solution {
public:
    int minImpossibleOR(vector<int>& nums) {
        unordered_set<int> s(nums.begin(),nums.end());
        for(int i=1;i<4294967295;i*=2)
        {
            if(s.find(i)==s.end())
                return i;
        }
        return 1;
    }
};