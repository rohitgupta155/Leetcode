class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        unordered_map<int,vector<int>> m;
        for(int i=0;i<nums.size();i++)
            m[nums[i]].push_back(i);
        sort(nums.begin(),nums.end());
        vector<int> a;
        int c=0;
        a.push_back(0);
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==nums[i-1])
                {int l=0;
                 while(i<nums.size()&&nums[i]==nums[i-1]){
                     a.push_back(c);i++;l++;}
                 c+=l;
                 i--;
                }
            else if(nums[i]>nums[i-1])
               { c++;
            a.push_back(c);}
        }
        vector<int> ans(nums.size());
        for(int i=0;i<nums.size();i++)
        {
            ans[m[nums[i]].back()]=a[i];
            m[nums[i]].pop_back();
            
        }
        return ans;
    }
};