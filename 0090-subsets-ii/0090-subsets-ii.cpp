class Solution {
public:
    set<vector<int>> a;
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> s;
        for(int i=0;i<nums.size();i++)
        {
            s.push_back(nums[i]);
            combination(nums,i+1,s);
            s.pop_back();
        }
        vector<vector<int>> ans={{}};
        for(auto i:a)
        {
            ans.push_back(i);
        }
        return ans;
    }
    void combination(vector<int>& nums,int j,vector<int> s)
    {
        sort(s.begin(),s.end());
            if(a.find(s)==a.end()){
            a.insert(s);
             }
        for(int i=j;i<nums.size();i++)
        {
            s.push_back(nums[i]);
            combination(nums,i+1,s);
            s.pop_back();
        }
    }
};