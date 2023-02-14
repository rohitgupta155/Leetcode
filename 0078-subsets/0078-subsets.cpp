class Solution {
public:
   set<set<int>> a;
   set<int> s;
vector<vector<int>> subsets(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            s.insert(nums[i]);
            combination(nums,i+1);
            s.erase(nums[i]);
        }
        vector<vector<int>> ans={{}};
        for(auto i:a)
        {
            vector<int> temp(i.begin(),i.end());
            ans.push_back(temp);
        }
        return ans;
    }
    void combination(vector<int>& nums,int j)
    {
        
            if(a.find(s)==a.end()){
            a.insert(s);
             }
        for(int i=j;i<nums.size();i++)
        {
            s.insert(nums[i]);
            combination(nums,i+1);
            s.erase(nums[i]);
        }
    }
};