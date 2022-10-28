class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int> m;
        int ans=-1;
        for(auto i:arr)
            m[i]++;
        for(auto i:m)
        {
            if(i.second==i.first)
                ans=max(ans,i.first);
            
        }
        return ans;
    }
};