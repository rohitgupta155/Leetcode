class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        if(nums.size()==0)
            return {};
        vector<pair<int,int>> v;
        int f=nums[0],s=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==s+1)
                s++;
            else{
                v.push_back({f,s});
                f=nums[i];
                s=f;
            }
        }
        v.push_back({f,s});
        vector<string> ans;
        for(auto i:v)
        {
            if(i.first==i.second)
                ans.push_back(to_string(i.first));
            else{
                ans.push_back(to_string(i.first)+"->"+to_string(i.second));
            }
        }
        return ans;
    }
};