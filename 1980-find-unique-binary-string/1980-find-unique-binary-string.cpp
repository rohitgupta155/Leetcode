class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        int n=nums.size();
        string s;
        for(int i=0;i<n;i++)
        {
            if(nums[i][i]=='0')
            s.push_back('1');
            else s.push_back('0');
        }
        return s;
    }
};