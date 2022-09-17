class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> m;
        int n=nums.size();
        for(int i=0;i<n;i++)
            m[nums[i]]++;
        vector<pair<int,int>> a;
        for(auto i:m)
            a.push_back(make_pair(-i.second,i.first));
        sort(a.begin(),a.end());
        vector<int> ans;
        for(auto i:a)
          {  int t=abs(i.first);
            while(t--)
            ans.push_back(i.second);
} 
        reverse(ans.begin(),ans.end());
            return ans;
    }
};