class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(),nums.end());
        int t=accumulate(nums.begin(),nums.end(),0);
        vector<int> ans;
        for(auto i:queries)
        {
            int c=0,sum=0;
            for(auto j:nums)
            {
                sum+=j;
                if(sum>i)
                {
                    ans.push_back(c);
                    break;
                }
                c++;
            }
            if(c==nums.size())
                ans.push_back(c);
        }
        return ans;
    }
};