class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int a=0;
        for(auto i:nums)
        {
            if(to_string(i).size()%2==0)
                a++;
        }
        return a;
    }
};