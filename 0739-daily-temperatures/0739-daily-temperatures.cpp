class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& nums) {
        vector<int>ans;
        stack<pair<int,int>> s;
        ans.push_back(0);
        s.push({nums.back(),nums.size()-1});
        for(int i=nums.size()-2;i>=0;i--)
        {
            if(nums[i]<s.top().first)
                ans.push_back(1);
            
            else{
                while(!s.empty()&&s.top().first<=nums[i])
                    {s.pop();}
                if(!s.empty())
                    ans.push_back(s.top().second-i);
                else ans.push_back(0);
            }
             s.push({nums[i],i});
        }
        reverse(ans.begin(),ans.end());
        return ans;
   
    }
   
};