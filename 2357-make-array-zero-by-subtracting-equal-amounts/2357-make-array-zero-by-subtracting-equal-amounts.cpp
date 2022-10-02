class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int i:nums)
            if(i)
                m[i]++;
        return m.size();
    }
};