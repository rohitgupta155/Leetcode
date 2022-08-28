class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int,vector<int>>m;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            m[nums[i]].push_back(i);
        }
        int mf=INT_MIN;
        for(auto i:m)
        {
            int size=i.second.size();
            if(mf<size)
                mf=size;
        }
        int mi=INT_MAX;
        for(auto i:m)
        {
            int s=i.second.size();
            if(s==mf)
            {
                mi=min(mi,(i.second[s-1]-i.second[0]+1));
                    
            }
        }
        return mi;
    }
};