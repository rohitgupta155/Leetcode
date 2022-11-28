class Solution {
public:
    int countElements(vector<int>& nums) {
        int m=*max_element(nums.begin(),nums.end());
        int mi=*min_element(nums.begin(),nums.end());
        int a=0;
        for(auto i:nums)
        {
            if(i>mi&&i<m)
                a++;
        }
        return a;
    }
};